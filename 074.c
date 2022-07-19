#include <stdio.h>

void show(int array[],int used) {
	for (int i = 0; i < used; i++)
	{
		printf("%d ",array[i]);
	}
}

int insert(int array[],int size, int used, int element,int index) {
	if (index>=size)
	{
		return 0;
	}
	else
	{
		for (int i = used-1; i >= index ; i--)
		{
			array[i+1]=array[i];
		}
		array[index]=element;
	}
	return 1;
}

int main(int argc, char *argv[])
{
	int arr[100]={1,3,5,32,54,554,902};
	show(arr,7);
	insert(arr,100,7,2,1);
	show(arr,8);
	return 0;
}
