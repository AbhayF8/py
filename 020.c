#include <stdio.h>

/* Actual and Formal Parameters
 * 1. When a function is called, the values(expressions) that are passed  in the call are called the arguments or actual parameters.
 * 2. Formal parameters are local variables which are assigned values from the arguments when the function is called.
 * Eg. int add(int a, int b)
 * 			return (a+b);
 * int main () {
 * 			int x=8,y=9;
 * 			printf("%d",add(x,y));
 * }
 * Here a and b are formal parameters and x and y are actual parameters.
 * 
 * Types of Function Calls in C Programming
 * We can call a function in two different ways, based on how we specify the arguments, and these two ways are :
 * 1. Call by Value
 * 2. Call by Reference
 * 
 * Call by Value
 * 1. When we call a function by value, it means that we are passing the values of the arguments which are copied into the format parameters of the function.
 * 2. Which means that the original values remain unchanged and only the parameters inside the function changes.
 * 
 * Call by Reference
 * 1. The call by reference method of passing arguments to a C function copies the address of the arguments into the formal parameters.
 * 2. Addresses of the actual arguments are copied and then assigned to the corresponding formal arguments.
 */
 
 // Call by Reference Example
 void swap(int *x,int *y) {
	 int temp;
	 temp=*x;
	 *x=*y;
	 *y=temp;
 }
 
 void ChangeValue(int *a) {
	 *a=211;
 }
 
 void quiz(int *a, int *b) {
	 int add,sub;
	 add=*a+*b;
	 sub=*a-*b;
	 *a=add;
	 *b=sub;
 }
 
 int main() {
	 int a=23,b=12,c=1;
	 printf("%d and %d\n",a,b);
	 swap(&a,&b);
	 printf("After swapping, %d and %d\n",a,b);
	 printf("The value of c was %d\n",c);
	 ChangeValue(&c);
	 printf("The value of c is now %d\n",c);
	 
	 int quiza=25,quizb=7;
	 printf("a=%d and b=%d\n",quiza,quizb);
	 quiz(&quiza,&quizb);
	 printf("a+b=%d and a-b=%d\n",quiza,quizb);
 }
