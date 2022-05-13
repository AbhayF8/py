#include <stdio.h>

void arrayrev(int array[],int length) {
	int a[length];
	printf("\nSize of array = %d\n",length);
	for (int i=sizeof(a)/sizeof(int)-1,j=0;i>=0;i--,j++) {
		array[j]=array[i];
	}
	for (int k=0;k<sizeof(a)/sizeof(int);k++) {
		printf("%d ",array[k]);
	}
}

int main() {
	int a[]={1,2,3,4,5,6,7,8,9,10,19};
	int len=sizeof(a)/sizeof(int);
	printf("Before reversal of int array\n");
	for (int i=0;i<sizeof(a)/sizeof(int);i++) {
		printf("%d ",a[i]);
	}
	printf("\nAfter reversal of int array\n"); //Without function
	for (int i=sizeof(a)/sizeof(int)-1;i>=0;i--) {
		printf("%d ",a[i]);
	}
	printf("\nWith Function\n");
	arrayrev(a,len);
}
