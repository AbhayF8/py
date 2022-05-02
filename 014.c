#include <stdio.h>

// Fibonacci Series using Iterative Method 

void fibonacci(int n) {
	int oldvalue,newvalue,printvalue;
	for (int i=1;i<n+1;i++) {
		if (i==1) {
			printf("0");
			if (n>i) {
				printf(",");
			}
		}
		else if (i==2) {
			printf("1");
			if (n>i) {
				printf(",");
			}
			newvalue=1;
			printvalue=1;
		}
		else if (i==3) {
			oldvalue=1;
			printvalue=oldvalue+newvalue;
			printf("%d",printvalue);
			if (n>i) {
				printf(",");
			}
			newvalue=printvalue;
		}
		else {
			printvalue=oldvalue+newvalue;
			oldvalue=newvalue; // This was where my logic was stuck
			printf("%d",printvalue);
			if (n>i) {
				printf(",");
			}
			newvalue=printvalue;
		}
	}
}
int main() {
	int choice;
	printf("Up to what nth term you want to print the fibonacci series? ");
	scanf("%d",&choice);
	fibonacci(choice);
}
