#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * replaceWord(const char * str, const char *old , const char *new) {
	char * resultString;
	int i,count=0;
	int oldWordLen=strlen(old);
	int newWordLen=strlen(new);
	
	// Counting the occurences of old word in str
	for (i=0;str[i]!='\0';i++) {
		if (strstr(&str[i],old)==&str[i]) {
			count++;
			
			// Jump over this word
			i=i+oldWordLen-1;
		}
		
		
	}
	// Dynamically allocating the memory for resultString
	resultString=(char *) malloc (i+count * (newWordLen-oldWordLen)+1);
	
	// Reuse i variable
	i=0;
	
	// Find the word and replace it
	while(*str) {
		if (strstr(str,old)==str) {
			strcpy(&resultString[i],new);
			i+=newWordLen;
			str+=oldWordLen;
		}
		else {
			resultString[i]=*str;
			i+=1;
			str+=1;
		}
	}
	// Null character in the last of string
	resultString[i]='\0';
	
	return resultString;
}

int main() {
	char template[]="Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}. Please visit our outlet {{outlet}} again for any issues or support. We plan to serve you soon.";
	FILE *ptr=NULL;
	ptr=fopen("/tmp/template.txt","w");
	fputs(template,ptr);
	fclose(ptr);
	
	// Reading template.txt
	char temp[200];
	ptr=fopen("/tmp/template.txt","r");
	fgets(temp,200,ptr);
	fclose(ptr);
	
	// Replacing and writing to out.txt
	char *newstr;
	ptr=fopen("/tmp/out.txt","w");
	newstr=replaceWord(temp,"{{outlet}}","Ram Laxman Fan Outlet");
	newstr=replaceWord(newstr,"{{name}}","Abhay Kumar Patel");
	newstr=replaceWord(newstr,"{{item}}","Table Fan");
	fputs(newstr,ptr);
	fclose(ptr);
	return 0;
}
