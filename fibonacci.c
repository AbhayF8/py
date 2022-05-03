#include <stdio.h>

void fibonacci(int n) {
	int old,new,current;
	for (int i=1;i<n+1;i++) {
		if (i==1) {
			printf("0");
			if (i<n) {
				printf(",");
			}
		}
		else if (i==2) {
			printf("1");
			if (i<n) {
				printf(",");
			}
			old=1;
			new=1;
		}
		else {
			current=old+new;
			printf("%d",current);
			if (i<n) {
				printf(",");
			}
			old=new;
			new=current;
		}
	}
}

int main() {
	int choice;
	printf("How much the fibonacci series do you want to print in n terms?\n> ");
	scanf("%d",&choice);
	fibonacci(choice);
}
