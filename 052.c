#include <stdio.h>
#include <string.h>

/* Suppose you have a template letter.txt. You have to fill in values to a template. Letter.txt looks something like this:

Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}. Please visit our outlet {{outlet}} for any kind of problems. We plan to serve you again soon.

You have to write a program that will automatically fill the template.For this, read this file and replace these values:

{{name}} - Harry 

{{item}} - Table Fan 

{{outlet}} - Ram Laxmi fan outlet
*/

int main() {
	char template[200]="Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}. Please visit our outlet {{outlet}} for any kind of problems. We plan to serve you again soon.";
	char string[15];
	char string2[15];
	FILE *ptr=NULL;
	ptr=fopen("/tmp/template.txt","w");
	fprintf(ptr,"%s",template);
	fclose(ptr);
	
	char name[20],item[10],outlet[25];
	printf("Enter your name\n");
	fgets(name,20,stdin);
	printf("What did u bought\n");
	fgets(item,10,stdin);
	printf("Enter your outlet\n");
	fgets(outlet,20,stdin);
	FILE *ptr1=NULL;
	ptr1=fopen("/tmp/out.txt","a");
	ptr=fopen("/tmp/template.txt","r");
	while (strcmp(string,"soon.")!=0) {
		strcpy(string2,string);
		if (strncmp(string2,"{{name}}",3)==0) {
			fprintf(ptr1,"%s ",name);
			printf("Case 1\n");
		}
		else if(strncpy(string2,"{{item}}",3)==0) {
			fprintf(ptr1,"%s ",item);
			printf("Case 2\n");
		}
		else if(strncmp(string2,"{{outlet}}",3)==0) {
			fprintf(ptr1,"%s ",outlet);
			printf("Case 3\n");
		}
		else {
			printf("else");
			fprintf(ptr1,"%s ",string);
		}
		printf("%lu ",strlen(string));
		fscanf(ptr,"%s",string);
		printf("%lu ",strlen(string2));
		}
	fclose(ptr);
	fclose(ptr1);
}
