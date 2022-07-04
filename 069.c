#include <stdio.h>

int main(int argc, char *argv[])
{
	int yes=0;
	char tag[9];
	scanf("%s",tag);
	char vowel[]="AEIOUY";
	
	int d1=tag[0]-'0';
	int d2=tag[1]-'0';
	int d3=tag[3]-'0';
	int d4=tag[4]-'0';
	int d5=tag[5]-'0';
	int d6=tag[7]-'0';
	int d7=tag[8]-'0';
	
	if ( (d1+d2)%2==0 && (d3+d4)%2==0 &&(d4+d5)%2==0 && (d6+d7)%2==0)
	{
		for (int i = 0; i < 6; i++)
		{
			if (tag[2]!=vowel[i])
			{
				yes++;
			}
		}
	}
	
	if (yes==6)
	{
		printf("valid\n");
	}
	else
	{
		printf("invalid\n");
	}
	return 0;
}
