#include <stdio.h>

/* File Modes, fgets, fputs, fgetc, fputc and more on C file handling
 * Mode & Description
r 	Opens an existing text file.
w 	Opens a text file for writing if the file doesn't exist then a new file is created.
a 	Opens a text file for appending(writing at the end of existing file) and create the file if it does not exist.
r+ 	Opens a text file for reading and writing.
w+ 	Open for reading and writing and create the file if it does not exist. If the file exists then make it blank.
a+ 	Open for reading and appending and create the file if it does not exist. The reading will start from the beginning, but writing can only be appended. 
* 
* Other I/O functions In C
* There are various functions provided by C standard library to read and write a file, character by character or in the form of a fixed length string.
* Some of them are:
* fputc
* fputs
* fgetc
* fgets
* 
* fputc function in C
* 1. Simplest function to write characters to a file is fputc.
* 2. Syntax of fputc goes as follows:
* int fputc(character,FILE pointer);
* it returns the written character written on success.
* On failure it returns EOF.
* The EOF is a constant defined in the header file stdio.h.
* 
* fputs in C
* fputs function is used to write a null terminated string to a file in C
* int fputs(const char *s,File *fp);
* 
* fgetc in C
* Simplest function to read characters from a file is fgetc.
* Syntax of fgetc goes as follows:
* int fgetc(FILE *fp);
* It returns the read character on success.
* On failure it returns EOF.
* The EOF is a constant defined in the header file stdio.h.
* 
* fgets in C
* fgets function is used to read a null terminated string to a file in C
* int fgets(const char *s,int n,FILE *fp);
* 
*/

int main() {
	FILE *ptr=NULL;
	ptr=fopen("/tmp/test.txt","r");
	char c = fgetc(ptr);
	printf("The character I read was %c\n",c);
	char str[10];
	fgets(str,5,ptr);
	printf("The string I read was %s\n",str);
	fclose(ptr);
	ptr=NULL;
	/*
	ptr=fopen("/tmp/test.txt","w");
	fputc('l',ptr);
	fputs("Hellow",ptr);
	fclose(ptr);
	*/
	
	// r+ 
	
	ptr=NULL;
	ptr=fopen("/tmp/test.txt","r+");
	fgets(str,3,ptr);
	printf("The string that I read is %s\n",str);
	fputs("In the start",ptr);
	fclose(ptr);
	
	
	// w+
	/*
	ptr=NULL;
	ptr=fopen("/tmp/test.txt","w+");
	fgets(str,3,ptr);
	printf("The string that I read is %s\n",str);
	fputs("Go to hell",ptr);
	fclose(ptr);
	*/
	
	// a+
	/*
	ptr=NULL;
	ptr=fopen("/tmp/test.txt","a+");
	fgets(str,3,ptr);
	printf("The string that I read is %s\n",str);
	fputs("Go to hell",ptr);
	fclose(ptr);
	*/

} 
