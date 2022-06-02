#include <stdio.h>

/* NULL pointer in C
 * 1. A null pointer is a pointer which has a value reserved for indicating that the pointer or reference does not refer to a valid object. 
 * 2. A null pointer is guaranteed to compare unequal to any pointer that points to a valid object.
 * 3. Dereferncing a null pointer is undefined in C, and a conforming implementation is allowd to assume that any pointer that is dereferenced is not null.
 * 4. NULL pointer is a specific pointer which is mentioned in C standard and it has specific purposes.
 * 4. NULL pointer gives a functionality to C porogrammer to check whether a pointer is legitimate or not.
 * 
 * Null Pointer C program
 * 1. A null pointer is a pointer that points to NULL.
 * 2. A null pointer shlould not be dereferenced.
 * 3. A check must be run by the c programmer to know whether a poiner is null before dereferncing it.
 * Eg -> int x=10;
 * int *p=NULL; -> cannot be derefernced
 * p=&x; // null pointer now holds address of int 'x' -> can be dereferencUses of NULL pointers
 * 
 * 1. To initialize a pointer variable in cases where pointer varibale has not been assigned any valid address yet.
 * 2. To check for legitimate address location before accessing any pointer variable.
 * 3. By doing so, we can perform error handling while using pointers with C.
 * 4. Example of such error handling can be derefernce pointer variable only if it's not NULL.
 * 5. To pass a null pointer to a function argument when we don't want to pass any valid memory address.
 * 
 * More on NULL pointers 
 * 1. NULL macro is defined as ((void *)0) in header files of most of the C compiler implementations.
 * 2. NULL pointer vs Uninitialized pointer - An uninitialized contains an undefined value.
 * 3. A null pointer stores a defined value, which is the one decided by the environment to not be a valid memory address for any object.
 * 4. NULL pointer vs Void Pointer - Null pointer is a value where as void pointer is a type.
 */

int main() {
	int a=3;
	int *ptr=&a;
	int *u;
	printf("The address of a is %d\n",ptr);
	if (ptr!=NULL)
	printf("Dereferencing ptr gives %d\n",*ptr);
	else {
		printf("The given pointer is a null point and it cannot be dereferenced.");
	}
	printf("Dereferencing a uninitialized pointer gives %d",*u);
}
