#include <stdio.h>

void StarPattern(int n) {
	for (int i=0;i<n;i++) {
		for (int j=0;j<i+1;j++) {
			printf("*");
		}
		printf("\n");
	}
}

void ReverseStarPattern(int n) {
	for (int i=0;i<n;i++) {
		for (int j=n;j>i;j--) {
			printf("*");
		}
		printf("\n");
	}
}

int main() {
	int rows,type;
	printf("Enter \n0 for triangular star pattern\n1 For Reverse Triangular Pattern\n> ");
	scanf("%d",&type);
	switch (type) {
		case 0:
			printf("Enter the no. of rows you want? \n> ");
			scanf("%d",&rows);
			StarPattern(rows);
			break;
		case 1:
			printf("Enter the no. of rows you want? \n> ");
			scanf("%d",&rows);
			ReverseStarPattern(rows);
			break;
		default:
			printf("Invalid Choice Please Try Again");
			break;
	}
}
