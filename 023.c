#include <stdio.h>
#include <string.h>

/* String Library in C <string.h>
 * 1. strcat() -> concatenate or combine two strings
 * 2. strlen() -> length
 * 3. strrev() -> reverse 
 * 4. strcpy() -> copy string to another
 * 5. strcmp() -> compare
 */

int main() {
	char s1[]="abhay";
	char s2[]="patel";
	char s3[30];
	printf("Concatenation of s1 and s2 is %s\n",strcat(s1,s2));
	printf("Length of s1 is: %zu\n",strlen(s1));
	printf("Length of s2 is: %zu\n",strlen(s2));
	//~ printf("The reverse of s1 is %s\n",strrev(s1)); //strrev is not included in Linux GCC
	//~ printf("The reverse of s2 is %s\n",strrev(s2)); //strrev is not included in Linux GCC
	strcpy(s3,s1);
	puts(s3);
	printf("The comparison of s1 and s2 is: %d\n",strcmp(s1,s2));
	
	// Quick Quiz -> Take input from user his name and his friend's name and print <your name> is friend of <friend's name> and atlast concatenate their name
	char s4[20],s5[20];
	printf("Enter your name\n> ");
	gets(s4);
	printf("Enter your friend's name\n> ");
	gets(s5);
	printf("%s is a friend of %s\n",s5,s4);
	printf("Concatenation of you and your friend is: %s",strcat(s4,s5));
}
