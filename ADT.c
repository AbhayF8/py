#include <stdio.h>

void insert(int arr[],int i, int num) {
	arr[i]=num;
}

int main(int argc, char *argv[])
{
	int arr[7],max=0,i=0,min=0,yes=0;
	arr[0]=1;
	arr[1]=2;
	arr[2]=99;
	arr[3]=-10;
	arr[4]=81;
	arr[5]=12;
	arr[6]=11;
    max=arr[0];
	for (i = 0; i < 7; i++)
	{
		if (max<arr[i])
		{
			max=arr[i];
		}
		if (min>arr[i])
		{
			min=arr[i];
		}
		if (arr[i]==2)
		{
			yes=1;
		}
		insert(arr,2,3);
	}
	i=0;
	printf("Max no. is %d\n",max);
	printf("Min no. is %d\n",min);
	if (yes==1)
	{
		printf("2 found \n");
	}
	for (i = 0; i < 7; i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("Making new array\n");
	i=0;
	int newarr[sizeof(arr)/sizeof(arr[0])+1];
	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		newarr[i]=arr[i];
	}
	printf("printing new array\n");
	i=0;
	newarr[sizeof(arr)/sizeof(arr[0])]=87;
	for (i = 0; i < sizeof(newarr)/sizeof(newarr[0]); i++)
	{
		printf("%d\n",newarr[i]);
	}
	return 0;
}
