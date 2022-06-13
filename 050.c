#include <stdio.h>

/* File I/O Operations in C
 * Working with Files in C
 * 1. When working with files, we have to declare a pointer of type FILE.
 * 2. This declaration helps us to work with files through C program.
 * 
 * Opening A File - Creating or Editing a File
 * 1. stdio.h contains a function called fopen() for opening files in C.
 * 2. The syntax for opening a file in standard I/O is :
 * ptr=fopen("fileopen","mode");
 * For example
 * fopen("/home/abhay/test.txt","a");
 * fopen("/home/abhay/test.bin","rb");
 * 
 * Closing A File
 * 1. Any file which is opened in a C program needs to be closed.
 * 2. Closing a file is accomplished by the library function fclose().
 * 3. fclose(fptr); //fptr is the file pointer associated with file to be closed.
 * 
 * Reading a File
 * 1. In order to read a file, we can use fscanf function.
 * 2. This function is file version of scanf function.
 * 3. fscanf expects a file pointer in addition to the other arguments which scanf expects.
 * 4. We will have to open the file in read mode in order to use this function.
 * 
 * Writing to a File
 * 1. In order to write to a file, we can use fprintf function.
 * 2. This function is file version of printf function.
 * 3. fprintf expects a file pointer in addition in addition to the other arguments which printf expects.
 * 4. We will have to open the file in write mode in order to use this function.
 */

int main() {
	FILE *ptr=NULL;
	// Reading a FILE
	ptr=fopen("/tmp/test","r");
	char string1[10],string2[10],string3[10];
	fscanf(ptr,"%s",string1);
	fscanf(ptr,"%s",string2);
	fscanf(ptr,"%s",string3);
	printf("word1 %s, word2 %s, word3 %s",string1,string2,string3);
	fclose(ptr);
	// Writing to a file
	ptr=fopen("/tmp/write","w");
	char string4[40]="This file was written by 050.c";
	fprintf(ptr,"%s",string4);
	fclose(ptr);	
	// Appending to a file
	ptr=fopen("/tmp/write","a");
	char string5[40]="\nThis file was appended by 050.c";
	fprintf(ptr,"%s",string5);
	fclose(ptr);
}
