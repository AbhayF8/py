#include <stdio.h>
#include <stdlib.h> // This library has dynamic memory allocation functions

/* Functions for Dynamic Memory Locations in C
 * 1. In Dynamic memory allocation, the memory is allocated at runtime from the heap segment.
 * 2. We have four functions that help use achieve this task.
 * i> malloc ii> calloc iii> realloc iv> free
 * 
 * Malloc
 * 1. malloc() stands for memory allocation.
 * 2. It reserves a block of memory with a given amount of bytes.
 * 3. The return value is a void pointer to the allocated space.
 * 4. Therefore the void pointer needs to be casted to the appropriate type as per requirements.
 * 5. However, if the amount of memory is insufficient, then the allocation of memory fails and it returns a NULL pointer.
 * 6. All the values at allocated memory are initialized to garbage values.
 * Syntax
 * ptr = (ptr-type*) malloc (size_in_bytes);
 * Example -> int ptr;
 * ptr = (int *) malloc (3*sizeof(int));
 * 
 * Calloc
 * 1. calloc() stands for contiguous allocation.
 * 2. It reserves n blocks of memory with a given amount of bytes.
 * 3. The return value is a void pointer to the allocated space.
 * 4. Therefore the void pointer needs to be casted to the appropriate type as per requirements.
 * 5. However, if the amount of memory is insufficient, then the allocation of memory fails and it returns a NULL pointer.
 * 6. All the values at allocated memory are initialized to 0.
 * Syntax
 * ptr = (ptr-type*) calloc (n,size_in_bytes);
 * Example -> int ptr;
 * ptr = (int *) calloc (3,sizeof(int));
 * 
 * Relloc
 * 1. relloc() stands for reallocation.
 * 2. If the dynamically allocated memory is insufficient, we can change the previously allocated memory using realloc() function.
 * Synatx
 * ptr = (ptr-type*) realloc(ptr, new_size_in_bytes);
 * 
 * Free
 * 1. free() is used to free the allocated memory.
 * 2. If the dynamically allocated memory is not required, we can free it using free function.
 * 3. This will free the memory being used by the program in the heap.
 * Syntax
 * free(ptr);
 */

void m() {
	int *ptr;
	int n;
	printf("What would be the length of the array?\n");
	scanf("%d",&n);
	ptr=(int*) malloc(n*sizeof(int));
	for (int i=0;i<n;i++) {
		printf("Enter the value at %d of ptr array\n",i);
		scanf("%d",&ptr[i]);
	}
	for (int i=0;i<n;i++) {
		printf("The value at %d of ptr array is %d\n",i,ptr[i]);
	}
}
void c() {
	int *ptr;
	int n;
	printf("What would be the length of the array?\n");
	scanf("%d",&n);
	ptr=(int*) calloc(n,sizeof(int));
	for (int i=0;i<n;i++) {
		printf("Enter the value at %d of ptr array\n",i);
		scanf("%d",&ptr[i]);
	}
	for (int i=0;i<n;i++) {
		printf("The value at %d of ptr array is %d\n",i,ptr[i]);
	}
}
void r() {
	int *ptr;
	int n;
	printf("What would be the length of the array?\n");
	scanf("%d",&n);
	ptr=(int*) calloc(n,sizeof(int));
	for (int i=0;i<n;i++) {
		printf("Enter the value at %d of ptr array\n",i);
		scanf("%d",&ptr[i]);
	}
	for (int i=0;i<n;i++) {
		printf("The value at %d of ptr array is %d\n",i,ptr[i]);
	}
	printf("What would be the new length of the array?\n");
	scanf("%d",&n);
	ptr=(int*) realloc(ptr,n*sizeof(int));
	for (int i=0;i<n;i++) {
		printf("Enter the value at %d of ptr array\n",i);
		scanf("%d",&ptr[i]);
	}
	for (int i=0;i<n;i++) {
		printf("The value at %d of ptr array is %d\n",i,ptr[i]);
	}
}
void f() {
	int *ptr;
	int n;
	char y;
	printf("What would be the length of the array?\n");
	scanf("%d",&n);
	ptr=(int*) calloc(n,sizeof(int));
	for (int i=0;i<n;i++) {
		printf("Enter the value at %d of ptr array\n",i);
		scanf("%d",&ptr[i]);
	}
	for (int i=0;i<n;i++) {
		printf("The value at %d of ptr array is %d\n",i,ptr[i]);
	}
	printf("Do you want to delete this ptr array?(y/n)\n");
	scanf("%s",&y);
	if (y=='y') {
		free(ptr);
		printf("Freed ptr from heap memory\n");
		printf("This will print garbage value because ptr has been cleared\n");
	}
	else {
		printf("Not freed\n");
	}
	printf("The value at 0 of ptr is %d",ptr[0]);
}
int main() {
	//m();
	//c();
	//r();
	f();
}
