#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	char village[n];
	scanf("%s",village);
	for (int i = 0; i < n; i++)
	{
		if (village[i]=='H' && village[i+1]=='H')
		{
			printf("NO\n");
			return 0;
		}
		else if(village[i]=='.')
		{
			village[i]='B';
		}
	}
	printf("YES\n");
	printf("%s\n",village);
	return 0;
}
