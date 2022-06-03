#include <stdio.h>
#include <stdlib.h>

/* Dangling Pointer
 * 1. A pointer pointing to a freed memory location or the location whose content has been deleted is called a dangling pointer.
 * 2. Dangling pointers arise during object destruction when an object that has an incoming reference is deleted or deallocated, without modifying the value of the pointer, so that the pointer still points to the memory location of the deallocated memory.
 * 
 * Causes of Dangling Pointer
 * 1. Deallocation of memory
 * 2. Returning local variables in function calls
 * 3. Variable going out of scope.
 * 
 * Deallocation of memory
 * When memory is deallocated, the pointer keeps pointing to the freed space.
 * Eg ->
 * char *str="Hi Harry!";
 * int a;
 * int *ptr=(int *) malloc(sizeof(sizeof(int);
 * free(ptr); // ptr now becomes a dangling pointer
 * ptr=NULL; // ptr is not dangling anymore
 * 
 * Returning local variables in Function calls
 * int *myFunc() {
	 * int a=34;
	 * return &a; 
 }
 * int main() {
	 int *ptr=myFunc();
	 * printf("%d",*ptr);
 }
 * 
 * Variable goint out of Scope
 * Eg ->
 * int main() {
	 int *ptr;
	 * {
	 * int i=0;
	 * ptr=&i;
	 * }
	 * //ptr is now a dangling pointer
	 * printf("%d",*ptr);
	 * }
 
 Is Dangling Pointer a Good Thing To Have?
 * 1. Dangling pointers can introduce nasty bugs in our C programs.
 * 2. Dangling pointer bugs frequently become security holes at times.
 * 3. We can avoid issues caused by dangling pointers by initializting pointer to NULL
 * 4. After de-allocating memory, pointer will be no longer dangling.
 * 5. Assigning NULL value means pointer is a null pointer now.
 */

int *Dang() {
	int a=3;
	return &a;
}

int main() {
	// By de allocating memory 
	int *ptr;
	ptr=(int *) malloc(7*sizeof(int));
	ptr[0]=5;
	ptr[1]=3;
	ptr[2]=1;
	ptr[3]=0;
	free(ptr); // ptr is now a dangling pointer
	printf("%d\n",*ptr);
	
	// By returning a local variable of function
	int *dangptr=Dang();
	// printf("%d\n",*dangptr);
	// dangptr is now a dangling pointer
	
	// By assigning memory of variable which is out of scope
	int *ptrdang;
	{
		int c=9;
		ptrdang=&c;
	}
	printf("%d",*ptrdang);
	// ptrdang is now a dangling pointer.
}
