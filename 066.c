// Not fully done Angle Problem by HackerEarth
#include <stdio.h>

int abs_angle(int angle) {
	if (angle>360)
	{
		return abs_angle(angle-360);
	}
	else
	{
		return angle;
	}
}

int is_abs(int angle,int req) {
	if (abs_angle(angle)==req)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int getangle(int angle,int req) {
	int j=0;
	for (int i = 0; i < 100; i++)
	{
		if (is_abs(angle*i,req)==1)
		{
			return 1;
			j=1;
		}
	}
	return j;
}

int main()
{
	int raju,rani;
	scanf("%d",&raju);
	scanf("%d",&rani);
	int knows[raju],wants[rani];
	for (int i = 0; i < raju; i++)
	{
		scanf("%d",&knows[i]);
	}
	for (int i = 0; i < rani; i++)
	{
		scanf("%d",&wants[i]);
	}
	for (int i = 0; i < rani; i++)
	{
		for (int j = 0; j < raju; j++)
		{
			if (getangle(knows[j],wants[i]))
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
			
		}
	}
	return 0;
}
