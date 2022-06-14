#include <stdio.h>

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
	FILE *ptr=NULL;
	ptr=fopen("/tmp/template.txt","w");
	fprintf(ptr,"%s",template);
	fclose(ptr);
	return 0;
	char name[20],item[10],outlet[25];
	printf("Enter your name\n");
	scanf("%s",&name);
	printf("What did u bought\n");
	scanf("%s",&item);
	printf("Enter your outlet\n");
	scanf("%s",&outlet);
	ptr=fopen("/tmp/template.txt","rw");
	while (fscanf(ptr,"%s",string)!="\n") {
		if (string=="{{name}}")
			fprintf(ptr,"%s",name);
		else if(string=="{{item}}")
			fprintf(ptr,"%s",item);
		else if(string=="{{outlet}}")
			fprintf(ptr,"%s",outlet);
		}
	fclose(ptr);
}
