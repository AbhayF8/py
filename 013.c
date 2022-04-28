#include <stdio.h>

/*
 * Array in C
 * 1. An array is a collection of data items of the same type.
 * 2. Items are stored at contiguous memory locations.
 * 3. It can also store the collection of derived data types such as pointers, structures,etc.
 * 4. A one dimensional array is like a list.
 * 5. A two dimenstion array is like table.
 * 6. The C language places no limit on the number of dimensions in an array.
 * 7. Some texts refer to one-dimensional arrays as vectors, two-dimensional arrays as matrices, and use the general term arrays when the number of dimensions is unspecified or unimportant.
 * 
 * Why use arrays
 * 1. Code that use arrays are more organised and readable.
 * 2. If you were to store the marks in a test of 56 students, creating 56 variable will make program look cluttered and messy.
 * 3. Solution to this is arrays!
 * 4. We can create arrays of integers and store the consecutive marks corresponding to the roll number in the array.
 * 
 * Advantage
 * 1. It is used to represent multiple data items of same type by using only single name.
 * 2. Accessing an item ina given array is very fast!
 * 3. 2 Dimensional arrays makes it easy in mathematical applications as it is used to represnt a matrix.
 * 
 * Properties of array
 * 1. Data in a array is stored is stored in contiguous memory locations.
 * 2. Each element of any array is of same size.
 * 3. Any element of the array with given index can be accessed very quickly by using its address which can be calculated using the base address and the index.
 * 
 * Syntax
 * 1. data_type name[size]
 * 2. data_type name[size]={x,y,z,.....}; //size not required in this case!
 * 3. data_type name[rows][columns]; for 2-d arrays
 * 4. We can also initialize the array one by one accessing it using its index:
 * name[0]=0;
 * 
 * Disadvantage
 * 1. Poor time complexity of insertion and deletion operation.
 * 2. Wastage of memory since arrays are fixed in size.
 * 3. If there is enough space present in the memory but not in contiguous form, you will not be able to initialize your array.
 * 4. It is not possible to increase the size of the arraw once you have declared the array.
 */

int main() {
	int marks[4]; //declaration
	marks[0]=4; //initialization
	marks[1]=5;
	marks[2]=6;
	marks[3]=7;
	for (int i=0;i<4;i++) 
	{
		printf("%d \n",marks[i]);
	}
	
	int class10[]={1,2,3,4,5}; //declaration and initialization at the same time
	for (int i=0;i<5;i++)
	{
		printf("%d\n",class10[i]);
	}
	
	int luckyno[5];
	for (int i=0;i<5;i++)
	{
		printf("Enter the data for %d element\n",i);
		scanf("%d",&luckyno[i]);
	}
	for (int i=0;i<5;i++)
	{
		printf("%d \n",luckyno[i]);
	}
	
	//creating 2d array
	int table[][4]={{1,2,3,4},
		            {6,7,8,9}};
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<4;j++)
		{
			printf("%d ",table[i][j]);
		}
		printf("\n");
	}
}
