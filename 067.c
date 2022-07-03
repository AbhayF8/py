#include <stdio.h>
#include <string.h>
int main()
{
	char zoo[20];
	int z=0,o=0;
	scanf("%s",zoo);
	for (int i = 0; i < strlen(zoo); i++)
	{
		if (zoo[i]=='z')
		{
			z++;
		}
		else if (zoo[i]=='o')
		{
			o++;
		}
	}
	if (2*z==o)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
