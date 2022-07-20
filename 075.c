#include <stdio.h>

void show(int array[],int used) {
	for (int i = 0; i < used; i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
}

void del(int array[],int* used, int indexToBeDeleted) {
	for (int i = indexToBeDeleted-1; i < *used; i++)
	{
		array[i]=array[i+1];
	}
	*used=*used-1;
}

int main(int argc, char *argv[])
{
	int arr[100]={1,23,42,55,65,76,334,566};
	int size=8;
	show(arr,size);
	del(arr,&size,3);
	show(arr,size);
	return 0;
}
