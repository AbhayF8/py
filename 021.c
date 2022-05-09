#include <stdio.h>

//Passing arrays in function
/* 1. We can pass arrays to a function when we need to pass a list of values to a given function.
 * 2. We can pass the arrays to a function :
 * i> By delaring array as a parameter in the function.
 * ii> By declaring a pointer in the function to hold the base address of the array.
 */
 
// By declaring array as a parameter in the function
void fx1(int array[]) {
	for (int i=0;i<10;i++) {
		printf("The value at %d is %d\n", i,array[i]);
	}
	array[9]=88;
}

// By declaring a pointer with the base address of array
void fx2(int *ptr) {
	for (int i=0;i<10;i++) {
		printf("The value at %d is %d\n", i,*(ptr+i));
	}
	*(ptr+9)=77;
}

// A 2d array
void fx3(int array[][2]) {
	for (int i=0;i<2;i++) {
		for (int j=0;j<2;j++) {
			printf("The value at %d & %d is %d\n",i,j,array[i][j]);
		}
	}
}
int main() {
	int arr[] = {2,45,32,12,43,55,2,41,42,99};
	int ar[][2]={{1,2},{3,4}};
	fx1(arr);
	printf("\n");
	fx2(arr);
	printf("\nAfter change\n");
	fx1(arr);
	printf("\n");
	fx2(arr);
	printf("\n");
	fx3(ar);
}
