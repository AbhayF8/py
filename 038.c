#include <stdio.h>
#include <stdlib.h>

int main() {
	int len,i=0;
	char *ptr;
	char a,b;
	while (i<3) {
		printf("Enter the length of your eID?\n");
		scanf("%d",&len);
		ptr=(char*)malloc((len+1)*sizeof(char)); // +1 for \0 character
		printf("Employee %d: Enter your eID\n",i+1);
		scanf("%s",ptr);
		getchar(); // So that Enter character is not taken by scanf
		printf("Enter the value of a\n");
		scanf("%c",&a);
		getchar();
		printf("Enter the value of b\n");
		scanf("%c",&b);
		printf("The value of a and b are %c and %c\n",a,b);
		printf("Your eID is %s\n",ptr);
		free(ptr);
		i++;
	}
}
