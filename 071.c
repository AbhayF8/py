#include <stdio.h>

int main(int argc, char *argv[])
{
	int t,i,j;
	scanf("%d",&t);
	for (i = 0; i < t; i++)
	{
		int green,purple,p,price1=0,price2=0;
		scanf("%d",&green);
		scanf("%d",&purple);
		scanf("%d",&p);
		for (j = 0; j < p; j++)
		{
			int status1,status2;
			scanf("%d",&status1);
			scanf("%d",&status2);
			if (status1==1)
			{
				price1+=green;
				price2+=purple;
			}
			if (status2==1)
			{
				price1+=purple;
				price2+=green;
			}
		}
		if (price1<price2)
		{
			printf("%d\n",price1);
		}
		else
		{
			printf("%d\n",price2);
		}
	}
	return 0;
}
