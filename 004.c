#include <stdio.h>

int main() {
	/* Excercise 1 Print Table of a given input number
	 * by CodeByHarry
	 */
	int n;
	printf("Enter the number for which you want the table for\n >");
	scanf("%d",&n);
	printf("Table for %d is below\n",n);
	printf("%d * 1 = %d\n",n,n*1);
	printf("%d * 2 = %d\n",n,n*2);
	printf("%d * 3 = %d\n",n,n*3);
	printf("%d * 4 = %d\n",n,n*4);
	printf("%d * 5 = %d\n",n,n*5);
	printf("%d * 6 = %d\n",n,n*6);
	printf("%d * 7 = %d\n",n,n*7);
	printf("%d * 8 = %d\n",n,n*8);
	printf("%d * 9 = %d\n",n,n*9);
	printf("%d * 10 = %d\n",n,n*10);
	
	/*C Format Specifiers and Escape Sequences
	 * 1. Format specifier is a way to tell the compiler what type of data is in a variable during taking input displaying output to the user.
	 * printf("This is a good boy %a.bf",var); will print var with b decimal points in a "a" character space.
	 * %c -> character
	 * %d -> integer
	 * %f -> float
	 * %l -> long
	 * %lf -> double
	 * %LF -> long double
	 * 
	 * Constants in C
	 * A constant is a value or varable that can't be changed in the program.
	 * There are two ways to define constant in C programming
	 * 1. const keyword
	 * #define preprocessor
	 */
	 
	 // 1st way
	 //const float b = 7.333
	 
	 // 2nd way in start of c file
	 #define pi 3.14
	 printf("%f",pi);
	 
	 /* Escape sequences in C
	  * 1. An escape sequence in C programming language is a sequence of characters.
	  * 2. It doesn't represent itself when used inside string literal or character.
	  * 3. It is composed of two or more characters starting with backslash \. For example \n represents new line
	  * \n is single character
	  * 
	  * \a -> Alarm or beep
	  * \b -> Backspace
	  * \n -> new line
	  * \t -> tab
	  * \v -> vertical tab
	  * \\ -> Backslsh
	  * \' -> Single Quote
	  * \" -> Double Quotes
	  * \? -> Question mark
	  */
	  printf("My backslash \\\n");
	  printf("print \\n new line \a");
	  
	  /* Comments in C
	   * for single line use //
	   * for multi line use backslash star and end with star backslash
	   */
}
