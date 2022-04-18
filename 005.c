#include <stdio.h>

// If Else statements

/* C if else statements -> Control Statements
 * 1. It is used to perform operations based on some conditions 
 * Types of if statements
 * a> If statement
 * b> If else statement
 * c> If and else if ladder
 * d> Nested if
 * 
 * Syntax for if else
 * if(3>2) {
 * printf("This wil execute");
 * }
 * else {
 * }
 * 
 * Syntax for if elseif
 * if (a>b) {
 * statement 1}
 * else if (a==b) {
 * statement 2}
 * else if (a<b) {
 * statement 3}
 */

int main() {
	printf("Enter your age\n> ");
	int age;
	scanf("%d",&age);
	if (age>=18) {
		printf("Yes, You can vote");
	}
	else if (age>10) {
		printf("You are just a teenage hence no");
	}
	
	else {
		printf("No, you are too young to vote");
	}
	
	printf("\nSurvey -> Which one of the following you passed\nEnter just the no.\n1.Maths only\n2. Science only\n3. Both\n");
	int choice;
	scanf("%d",&choice);
	if (choice==3) {
		printf("\nYou got Rs.45 as reward.");
	}
	else {
		printf("\nYou got Rs.15 as reward.");
	}
	/*
	 * Switch statement
	 * To reduce mess created by if else commands
	 * int a;
	 * scanf("%d",&a);
	 * switch(a) {
	 * case 1:
	 * printf("The value is 1");
	 * case 2:
	 * printf("The value is 2");
	 * default:
	 * printf("No value found");
	 * }
	 * 
	 * Rules for switch statements
	 * 1. Must be a int or char.
	 * 2. Case value must be a integer or character.
	 * 3. Case must come under switch.
	 * 4. Break is not mandatory.
	 */
	 int myage, marks;
	 printf("\nPlease enter your age\n> ");
	 scanf("%d",&myage);
	 switch(myage) {
		 case 10:
			printf("You are of age 10\nEnter your marks \n> ");
			scanf("%d",&marks);
			switch (marks) {
				case 50:
					printf("Your marks are 50");
					break;
				default:
					printf("Your marks are not 50");
				}
			break;
		 case 18:
			printf("You are of age 18");
			break;
		 case 30:
			printf("You are of age 30");
			break;
		 case 60:
			printf("You are of age 60");
			break;
		 default :
			printf("You are not of age 10, 18, 30 or 60.");
	 }
	 return 0;
}
