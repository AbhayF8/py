#include <stdio.h>
// Using scanf for string because fgets and gets having issue with input lines
typedef struct Driver {
	char name[40];
	char dlNo[30];
	char route[25];
	int kms;
} dr;

int main() {
	int n; /// No. of drivers
	printf("For how many drivers you want to take details\n> ");
	scanf("%d",&n);
	dr s[n];
	
	//Inputs details
	for (int i=0;i<n;i++) {
		printf("Driver %d\n",i+1);
		printf("Name\n");
		scanf("%s",&s[i].name);
		printf("DL No.\n");
		scanf("%s",&s[i].dlNo);
		printf("Route\n");
		scanf("%s",&s[i].route);
		printf("How much kms you have worked with us\n");
		scanf("%d",&s[i].kms);
	}
	
	printf("\n*****Printing the details of all drivers*****\n");
	printf("Total Drivers - %d\n",n);
	//Output details
	for (int i=0;i<n;i++) {
		printf("Driver No. %d\n",i+1);
		printf("Name\t%s\n",s[i].name);
		printf("DL No.\t%s\n",s[i].dlNo);
		printf("Route\t%s\n",s[i].route);
		printf("KMS\t%d\n\n",s[i].kms);
	}
}

