#include <stdio.h>

/* Initial -> 1,2,3,4,5,6,7,8
 * 8,2,3,4,5,6,7,1
 * 8,7,3,4,5,6,2,1
 * 8,7,6,5,4,3,2,1
 */

void arrayrev(int array[]) {
	int temp;
	for (int i=0;i<8/2;i++) {
		temp=array[i];
		array[i]=array[7-i];
		array[7-i]=temp;
	}
}

int main() {
	int arr[]={1,2,3,4,5,6,7,8};
	printf("Before reversal of array\n");
	for (int i=0;i<sizeof(arr)/sizeof(int);i++) {
		printf("The value of element at %d is %d\n",i,arr[i]);
	}
	arrayrev(arr);
	printf("\nAfter reversal of array\n");
	for (int i=0;i<sizeof(arr)/sizeof(int);i++) {
		printf("The value of element at %d is %d\n",i,arr[i]);
	}
}
