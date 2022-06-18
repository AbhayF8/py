#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * replace(const char *str, const char *old, const char *new) {
	char *newstr;
	int i,count=0;
	int oldwordlen=strlen(old);
	int newwordlen=strlen(new);
	
	// Checking how many times the old word is there
	for (i=0;str[i]!='\0';i++) {
		if (strstr(&str[i],old)==&str[i]) {
			count++;
			i=i+oldwordlen-1;
		}
	}
	
	// Allocating the memory required for new string dynamically
	newstr=(char *) malloc(i+count * (newwordlen-oldwordlen)+1);
	i=0;
	
	// Checking that the substring matches the string
	while (*str) {
		if (strstr(str,old)==str) {
			strcpy(&newstr[i],new);
			i=i+newwordlen;
			str=str+oldwordlen;
		}
		else {
			newstr[i]=*str;
			i=i+1;
			str=str+1;
		}
	}
	newstr[i]='\0';
	return newstr;
}

// Read template.txt and replace the words and make a new out.txt
int main() {
	char name[20],item[20],outlet[20];
	char template[]="Thank you {{name}} for purchasing {{item}} from our outlet {{outlet}}. Please visit our outlet {{outlet}} again for any issues. We plan to serve you again.";
	FILE *ptr=NULL;
	ptr=fopen("/tmp/template.txt","w");
	fprintf(ptr,"%s",template);
	fclose(ptr);
	
	// fgets adds newline character, remove it
	printf("Enter your name\n");
	fgets(name,20,stdin);
	name[strlen(name)-1]='\0';
	printf("What did u bought\n");
	fgets(item,20,stdin);
	item[strlen(item)-1]='\0';
	printf("From which outlet\n");
	fgets(outlet,20,stdin);
	outlet[strlen(outlet)-1]='\0';

char string[20],newstring[200];
	ptr=fopen("/tmp/template.txt","r");
	while (strcmp(string,"again.")!=0) {
		fscanf(ptr,"%s",string);
		strcat(newstring,string);
		strcat(newstring," ");
	}
	printf("%s\n",newstring);
	
	char n[]="{{name}}",i[]="{{item}}",o[]="{{outlet}}";
	char *strnew;
	strnew=replace(newstring,n,name);
	strnew=replace(strnew,i,item);
	strnew=replace(strnew,o,outlet);
	printf("%s\n",strnew);
	fclose(ptr);
	ptr=fopen("/tmp/out.txt","w");
	fputs(strnew,ptr);
	fclose(ptr);
}
