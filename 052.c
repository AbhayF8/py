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
	// first create template.txt
	char template[200]="Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}. Please visit our outlet {{outlet}} for any kind of problems. We plan to serve you again soon.";
	FILE *ptr=NULL;
	ptr=fopen("/tmp/template.txt","w");
	fprintf(ptr,"%s",template);
	fclose(ptr);
	
	// take input
	char name[20],item[20],outlet[25];
	printf("Enter your name\n");
	fgets(name,20,stdin);
	printf("What did u bought\n");
	fgets(item,20,stdin);
	printf("Enter your outlet\n");
	fgets(outlet,20,stdin);
	// fgets add newline character in the last
	// \n is before null terminating character so strlen(a)-1
	name[strlen(name)-1]='\0';
	item[strlen(item)-1]='\0';
	outlet[strlen(outlet)-1]='\0';
	
	FILE *ptr1=NULL;
	// Read from template.txt and write in out.txt
	ptr=fopen("/tmp/template.txt","r");
	ptr1=fopen("/tmp/out.txt","w");
	char string[20];
	while (strcmp(string,"soon.")!=0) {
		// Get first word and vice versa.
		fscanf(ptr,"%s",string);
		if (strcmp(string,"{{name}}")==0) {
			fprintf(ptr1,"%s ", name);
		}
		else if (strcmp(string,"{{item}}")==0) {
			fprintf(ptr1,"%s ", item);
		}
		else if (strcmp(string,"{{outlet}}.")==0) {
			fprintf(ptr1,"%s. ", outlet);
		}
		else if (strcmp(string,"{{outlet}}")==0) {
			fprintf(ptr1,"%s ", outlet);
		}

		else {
			fprintf(ptr1,"%s ", string);
		}
	}
	
	fclose(ptr);
	fclose(ptr1);
}
