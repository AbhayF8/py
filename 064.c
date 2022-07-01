#include <stdio.h>
#include <string.h>

int main()
{
	char message[100];
	int i=0,j=0;
	scanf("%s",message);
	
	for (i=0;i<strlen(message);i++)
	{
		if (message[0]!='l')
		{
			while (message[0]!='l')
			{
				message[j]=message[j+1];
				j++;
				
				if (j>strlen(message))
				{
					j=0;
				}
				if (message[j]=='\0')
				{
					break;
				}
			}
		}
		else if (message[1]!='o')
		{
			j=1;
			while(message[1]!='o')
			{
				message[j]=message[j+1];
				j++;
				if (j>strlen(message))
				{
					j=1;
				}
				if (message[j]=='\0')
				{
					break;
				}
			
			}
		}
		else if (message[2]!='v')
		{
			i=2;
			while (message[2]!='v')
			{
				message[j]=message[j+1];
				j++;
				if (j>strlen(message))
				{
					j=2;
				}
				if (message[j]=='\0')
				{
					break;
				}
			
			}
		}
		else if (message[3]!='e')
		{
			j=3;
			while(message[3]!='e')
			{
				message[j]=message[j+1];
				j++;
				if (j>strlen(message))
				{
					j=3;
				}
				if (message[j]=='\0')
				{
					break;
				}
			
			}
		}
	}
	message[4]='\0';
	if (strcmp(message,"love")==0) {
		printf("I love you, too!\n");
	}
	else
	{
		printf("Let us breakup!");
	}
	
	return 0;
}
