#include <stdio.h>

int linearSearch(int arr[], int size, int element) {
	for (int i = 0; i < size; i++)
	{
		if(arr[i]==element) {
			return i;
		}
	}
	return -1;
}

int binarySearch(int arr[],int size, int element) {
	int low, mid, high;
	low=0;
	high=size-1;
	
	while (low!=high)
	{
		mid=(low+high)/2;
		if (arr[mid]==element)
		{
			return mid;
		}
		else if (arr[low]==element)
		{
			return low;
		}
		else if (arr[high]==element)
		{
			return high;
		}
		else if (arr[mid]<element)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return -1;
}

int main(int argc, char *argv[])
{
	int a[]={1,2,3,44,56,78,98,122,132,154,244,552,559};
	int size = sizeof(a)/sizeof(a[0]);
	int element = 56;
	int index = binarySearch(a,size,element);
	printf("The element %d was found at index %d\n",element,index);
	return 0;
}
