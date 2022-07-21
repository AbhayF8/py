#include <stdio.h>
#include <string.h>

int smallest(int a, int b, int c, int d) {
	if(a<=b && a<=c && a<=d) {
		return a;
	}
	else if (b<=c && b<=d && b<=a)
	{
		return b;
	}
	else if (c<=d && c<=a && c<=b)
	{
		return c;
	}
	else if (d<=a && d<=c && d<=b)
	{
		return d;
	}
	return 0;
}

int main(int argc, char *argv[])
{
	int t,i;
	scanf("%d",&t);
	for (i = 0; i < t; i++)
	{
		char ruby[100];
		int r=0,u=0,b=0,y=0;
		scanf("%s",ruby);
		for (int j = 0; j < strlen(ruby); j++)
		{
			if (ruby[j]=='r')
			{
				r++;
			}
			else if (ruby[j]=='u')
			{
				u++;
			}
			else if (ruby[j]=='b')
			{
				b++;
			}
			else if (ruby[j]=='y')
			{
				y++;
			}
		}
		printf("%d\n",smallest(r,u,b,y));
	}
	return 0;
}
