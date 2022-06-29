#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char binary[100];
	int r=0;
	scanf("%s",binary);
	char digit=binary[0];
	for (int i = 1; i < strlen(binary); i++)
	{
		if (digit==binary[i]) {
			r++;
			// dont compare if next char is terminating character
			if (binary[i+1]=='\0') {
				r--;
				break;
			}
			if (r>4) {
				break;
			}
			if (binary[i]!=binary[i+1]) {
				r=0;
			}
		}
		digit=binary[i];
	}
	if (r>=4) {
		printf("Sorry, sorry!");
	}
	else
	{
		printf("Good luck!");
	}
	return 0;
}
