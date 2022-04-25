#include <stdio.h>

// Multiplication Table using loop and function

void printtable(int a);

int main() {
	int n;
	printf("This program will print the Multiplication table of inputted number\nEnter the number\n> ");
	scanf("%d",&n);
	printtable(n);
}

void printtable(int a) {
	for (int i=1;i<=10;i++) {
		printf("%d X %d = %d\n",a,i,a*i);
	}
}
