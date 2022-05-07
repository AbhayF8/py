#include <stdio.h>

/* Star Pattern Excercise
 * Take input from user 0 for triangular star pattern and 1 for reversed triangular star pattern.
 * 
 * *
 * **
 * ***
 * **** -> Triangular Star pattern
 * 
 * ****
 * ***
 * **
 * * -> Reverse Triangular Star Pattern
 */
 
void printstar(int n) {
	for (int i=0;i<=n;i++) {
		for (int j=1;j<i+1;j++) {
			printf("*");
		}
		printf("\n");
	}
}
void printrevstar(int n) {
	for (int i=n;i>=0;i--) {
		for (int j=1;j<i+1;j++) {
			printf("*");
		}
		printf("\n");
	}
}


int main() {
	int ntimes,star;
	printf("Star Pattern Printer\n");
	printf("Enter 0 for Triangular Star Pattern\n*\n**\n***\n****\n\n");
	printf("Enter 1 for Reverse Triangular Star Pattern\n****\n***\n**\n*\n\n> ");
	scanf("%d",&star);
	printf("\nHow many times do you want to print?\n> ");
	scanf("%d",&ntimes);
	if (star==0) {
		printstar(ntimes);
	}
	else if (star==1) {
		printrevstar(ntimes);
	}
	return 0;
}
