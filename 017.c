#include <stdio.h>

/* Arrays and Pointer Arithmetic
 * 1. There are four arithmetic operators -> ++ , -- , + , -
 * 
 * Consider the following declaration:int arr[10] :
 * What is the type of arr?
 * However, arr, by itself, without any index subscripting can be assigned to any integer pointer.
 * What type does arr[i] have?
 * 
 * arr[i] == *(arr+i)
 * If arr is a pointer to arr[0] then arr+i is a pointer to arr[i]
 */

int main() {
	int a=24;
	int* ptra = &a;
	printf("%d\n",ptra);
	printf("%d\n",ptra+1); // +1 adds the size of int
	
	printf("The value of a is %d\n",*(ptra));
	printf("The value of a is %d\n",a);
	
	int arr[] = {1,2,3,4,5,6,7,8};
	int* arrayptr = arr;
	printf("The value of arr at position 3 is %d\n",arr[3]);
	
	printf("The address of first element of the array is %d \n",&arr);
	printf("The address of first element of the array is %d \n",&arr[0]);
	printf("The address of second element of the array is %d \n",&arr[1]);
	printf("The address of second element of the array is %d \n",arr+1); // relation b/w array and pointer
	
	//arr++; //will throw an error because arr is an constant (the address of arr) but we can do this
	arrayptr++;
	
	
	printf("The value of first element of the array is %d \n",*(arr));
	printf("The value of first element of the array is %d \n",arr[0]);
	printf("The value of first element of the array is %d \n",*(&arr[0]));
	printf("The value of second element of the array is %d \n",*(&arr[1]));
	printf("The value of second element of the array is %d \n",arr[1]);
	printf("The value of second element of the array is %d \n",*(arr+1));
}
