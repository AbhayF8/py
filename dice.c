#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char str[100000];
	int girls=0,digit;
	scanf("%s",str);
	for (int i=0;i<strlen(str);i++) {
		digit=str[i]-'0';
		if (digit>0 && digit<7 && digit!=6) {
			girls++;
		}
		else if(digit==0) {
			printf("-1");
			return 0;
		}
		else if(str[strlen(str)-1]=='6') {
			printf("-1");
			return 0;
		}
	}
	printf("%d",girls);
}
