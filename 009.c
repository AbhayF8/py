#include <stdio.h>

/*
 * Functions in C
 * 1. Used to divide large C programs into small pieces.
 * 2. can be used multiple times and hence provides code reusability and modularity in C.
 * 3. also known as procedure or subroutine
 * 
 * Syntax
 * return_type function_name (data_type parameter1, data_type parameter2) {
	 // code to be executed
 }
 * Advantages of Functions
 * 1. We can avoid rewriting same logic through functions.
 * 2. We can divide work among programmers using functions.
 * 3. We can easily debug a program using a function.
 * 
 * Declaration, Definiton and Call
 * 1. A function is declared to tell the compiler about its existence.
 * 2. A function is define to get some work done.
 * 3. A function is called in order to be used.
 * 
 * Types of Functions
 * 1. Library function
 * Functions included in C header file.
 * 2. User defined function
 * Function created by C programmmer to reduce complexity of a program.
 * 
 * Function Code Examples
 * 1. without arguments and without return value.
 * 2. without arguments and with return value.
 * 3. with arguments and without return value.
 * 4. with arguments and with return value. 
 */

int sum(int a, int b); // an example of declaration
void printstar();
void intro();
int takenum();
int main() {
	int a; int b; int c; int d; int stars; // an example of declaration
	printf("Enter first number \n> ");
	scanf("%d",&a);
	printf("Enter second numebr \n> ");
	scanf("%d",&b);
	c = sum(a,b); // an example of calling a function
	printf("The sum is %d\n",c); //4th code example done
	printf("Enter the no. of stars you want\n> ");
	scanf("%d",&stars);
	printstar(stars); //3rd code example done
	d = takenum(); //2nd code example done
	printf("The entered no. is %d",d);
	intro(); // 1st code example done
}

int sum(int a, int b) {
	return a + b; // an example of defining a function
}

void printstar(int n) {
	for (int i=0;i < n;i++) {
		printf("%c",'*');
	}
}

int takenum() {
	int i;
	printf("\nEnter a number \n >");
	scanf("%d",&i);
	return i;
}

void intro() {
	printf("\nC is a high level programming language.");
}
