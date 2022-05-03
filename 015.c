#include <stdio.h>

/* Pointers in C
 * 1. Variable which stores the address of another variable.
 * 2. Can be of type int,char,array,function,or any other pointer.
 * 3. Size depends on the architecture.Ex 2 bytes for 32 bit.
 * 4. Pointer in C programming language can be declared using * (asterisk symbol).
 * 
 * '&' and '*'
 * 1. The address of operator '&' returns the address of a variable.
 * 2. '*' is the dereference operator (also called indirection operator) used to get the value at a given address.
 */

int main() {
	int a=9;
	int *ptra=&a;
	int *ptr2;
	int *ptr3=NULL;
	printf("The value of a is %d\n",a);
	printf("The value of a is %d\n",*ptra);
	printf("The address of a is %p\n",ptra);
	printf("The address of a is %p\n",&a);
	printf("The address of pointer ptra that is pointing to a ie points to a is %p\n",&ptra);
	printf("The address of some garbage %p\n",&ptr2);
	printf("The address of ptr3 assigned NULL %p\n",ptr3);
}

/* Null Pointer
 * 1. A pointer that is not assigned any value but NULL is known as the NULL pointer.
 * 2. In computer programming, a null pointer is a pointer that does not point to any object or function.
 * 3. We can use it to initialize a pointer variable when that pointer variable isn't assigned any valid memory address yet.
 * int *ptr = NULL;
 */

/* Uses of Pointer
 * 1. Dynamic memory allocation
 * 2. Arrays, Functions, and Structures.
 * 3. Return multiple values from a function.
 * 4. Pointer reduces the code and improves the performance.
 */
