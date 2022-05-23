#include <stdio.h>
/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

struct TravelAgency {
	char name[20];
	char license[20];
	char start[20];
	char end[20];
	int kms;
};

int main() {
	struct TravelAgency a;
	
	for (int i=0;i<1;i++) {
		printf("Enter your name\n");
		fgets(a.name,20,stdin);
		
		printf("Enter your Driving License No.\n");
		fgets(a.license,20,stdin);
		
		printf("What is the start of your route\n");
		fgets(a.start,20,stdin);
		
		printf("What is the end of your route\n");
		fgets(a.end,20,stdin);
		
		printf("How much kilometres do you have worked with us\n");
		scanf("%d",&a.kms);
		
	}
	for (int i=0;i<4;i++) {
		printf("Name\t\t\t");
		printf("%s",a.name);
		
		printf("Driving License No.\t");
		printf("%s",a.license);
		
		printf("Route Start\t\t");
		printf("%s",a.start);
		
		printf("Route End\t\t");
		printf("%s",a.end);
		
		printf("KMS\t\t\t");
		printf("%d",a.kms);
		
		printf("\n\n");
	}
}
