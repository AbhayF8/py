#include <stdio.h>

int main()
{
	int b,i,sum=0,min=-1;
	int j[b];
	scanf("%d",&b);
	
	for (i = 0; i < b; i++)
	{
		scanf("%d",&j[i]);
		sum=sum+j[i];
	}
	if(sum%2==0) {
		for (i=0;i<b;i++) {
			if ((min==-1)&& j[i]%2==1)
			min=j[i];
			if (min>j[i]) 
			min=j[i];
		}
	}
	if (sum%2==1) {
	printf("%d\n",sum);
	}
	else if(min==-1) {
		printf(":(\n");
	}
	else {
		printf("%d",sum-min);
	}
	return 0;
}

