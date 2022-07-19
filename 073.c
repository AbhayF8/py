#include <stdio.h>

// Simple binary search  

int main()
{
	int n,o=0;
	printf("Enter a number which u want to search");
	
	scanf("%d",&n);
	int low,high,mid;
	low=0;
	high=1000;
	while(low!=high)
	{
		o++;
		mid=(low+high)/2;
		printf("%d %d %d\n",low,mid,high);
		if (low==n)
		{
			printf("Number found at low\n");
			break;
		}
		else if (high==n)
		{
			printf("Number found at high\n");
			break;
		}
		else if(n<mid)
		{
			high=mid;
		}
        else if(n>mid)
        {
			low=mid;
        }
        else if (n==mid)
		{
			printf("Number found at mid\n");
			break;
		} 
	}
	printf("Took O(%d)\n",o);
	
	return 0;
}
