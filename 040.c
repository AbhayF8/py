#include <stdio.h>

/* Void Pointer in C
 * 1. A void pointer is a pointer that has no data type associated with it.
 * 2. A void pointer can be easily typecasted to any pointer type.
 * 3. In simple language, void pointer is a general purpose pointer variable.
 * 
 * Uses of Void Pointer
 * 1. In dynamic memory allocation, malloc() and calloc() return (void *) type pointer.
 * 2. This allows these dynamic memory functions to be used to allocate memory of any data type. This is because these pointers can be typecasted to any pointer type.
 * 
 * More on Void Pointers
 * 1. It is not possible to dereference void pointers.
 * 2. Pointers arithmetics is not allowed in C standards with void pointers.
 * 3. Hence it is not recommended to use pointers arithmetic with void pointers.
 */
 
int main() {
	int a=4;
	float pi=3.14;
	char c='a';
	void *ptr;
	ptr=&a;
	printf("The value of a is %d\n",*((int *)ptr));
	ptr=&pi;
	printf("The value of pi is %f\n",*((float *)ptr));
	ptr=&c;
	printf("The character stored in c variable is %c\n",*((char *)ptr));
}
