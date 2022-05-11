#include <stdio.h>

/* Strings in C
 * Do we have a string data type in C
 * No
 * 
 * But we can express it using an array of characters and terminating it with \0 null character. The array should have size of length of string + 1 for null chcaracter ie (len +1)
 * String -> An array of characters terminated by Null character.
 * Strings in C is created by creating an array of characters.
 * We need an extra character (\0 or Null character) to tell the compiler that the string end here.
 */

void PrintStr(char str[]) {
	int i=0;
	while (str[i]!='\0') {
		printf("%c",str[i]);
		i++;
	}
}

int main() {
	//two ways of creating a string
	char name1[]="abhay"; // if we use double quotes then compiler will automatically add null character in the last. 
	char name2[]={'a','b','h','a','y','\0'}; // in single quotes we will have to add null character manually
	printf("%s is same as %s\n",name1,name2);
	
	//how to take input
	char str[52];
	printf("Enter some words as input\n> ");
	gets(str); // defined in stdio.h for taking input scanf is not recommended because it has problem with whitespaces.
	printf("Using printf: %s\n",str);
	printf("Using custom PrintStr function: ");
	PrintStr(str);
	printf("\n");
	printf("Using puts: ");
	puts(str); //defined in stdio.h for easily printing character arrays.
}
