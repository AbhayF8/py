#include <stdio.h>

/*
 * KM to Miles
 * inches to foot
 * cm to inches
 * pound to KG
 * inches to meter
 */

void convert () {
	int choice,value;
	printf("What do you want to convert?\n1.km to miles\n2.inches to foot\n3.cm to inches \n4.pound to kg\n5.inches to meter\n");
	scanf("%d",&choice);
	printf("Enter the numerial value\n");
	scanf("%d",&value);
	if (choice==1) {
		printf("\nAns is %f miles\n",(float)value/1.609);
	}
	else if (choice==2) {
		printf("\nAns is %f foots\n",(float)value/12);
	}
	else if (choice==3) {
		printf("\nAns is %f inches\n",(float)value/2.54);
	}
	else if (choice==4) {
		printf("\nAns is %f kg\n",(float)value/2.205);
	}
	else if (choice==5) {
		printf("\nAns is %f metre\n",(float)value/39.37);
	}
	
}

int main() {
	int quit;
	start:
		convert();
		printf("Do you want to do another calculation\n1. Yes\n2. No, Let me exit\n");
		scanf("%d",&quit);
		if (quit!=1) {
			goto end;
		}
		else {
			goto start;
		}
	end:
		return 0;
}
