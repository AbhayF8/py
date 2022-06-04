#include <stdio.h>

/* Wild Pointer in C
 * 1. Uninitialized pointers are known as wild pointers.
 * 2. These pointers point to some arbitrary location in memory and may cause a program to crash or behave badly.
 * 3. Dereferencing wild pointers can cause nasty bugs.
 * 4. It is suggested to always initialize unused pointers to NULL.
 */

int main() {
	int *ptr; // ptr is a wild pointer
	// *ptr=54; // This is not a good thing.
	int a=4;
	ptr=&a; // ptr is no more a wild pointer
	printf("The value of a is %d",*ptr);
}
