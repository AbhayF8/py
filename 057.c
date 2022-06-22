#include <stdio.h>

/* Pointer functions in C
 * Quick Recap on Pointers
 * 1. A pointer is a variable which stores address of another variable.
 * 2. & symbol is used to get the address of the variable.
 * 3. * symbol is used to get the value of the variable that the pointer is pointing to.
 * 4. In C, we can create generric pointers too.
 * 5. Regular C variable stores the value whereas pointer stores the address of the variable.
 * 
 * Quick Recap on Dynamic Memory Allocation
 * 1. An statically allocated cariable or array has a fixed size in memory.
 * 2. Dynamic Memory Allocation is a way in which the size of a data structure can be changed during the runtime.
 * 3. Memory assigned to a program in a typical architecture can be broken down into four segments:
 * i> Code
 * ii> Static/global variables
 * iii> Stack
 * iv> Heap
 * 
 * 
 * Function Pointers 
 * 1. We can have pointer pointing to functions as well.
 * 2. Function pointers are useful to implement callback functions.3. Compiler takes one or more source files and converts them to machine code.
 */

int sum(int a, int b) {
	return a+b;
}

int main() {
	printf("The sum of 1 and 2 is %d\n",sum(1,2));
	int (*fPtr) (int,int); // Declaring a function pointer
	fPtr=&sum; // Initialising a function pointer
	int d=(*fPtr)(4,6); // Using it
	printf("The value of d is %d",d);
}
