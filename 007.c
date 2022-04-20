#include <stdio.h>

/* Break and continue in C
 * 
 * Break statement
 * 1. to bring out of a loop
 * 2. used inside loops or switch statements
 * 
 * Continue statements
 * 1. used to bring the program control to the next iteration of the loop.
 * 2. skips some code inside the loop and continues with the next iteration.
 * 3. used when we have to skip some lines of codes for some condition.
 */

int main() {
	int a,age;
	for (a=0;a<10;a++){
		printf("%d\nEnter your age\n> ",a);
		scanf("%d",&age);
		if (age>18) {
			printf("Arre bhai bhai bhai!");
			break;
		}
		else {
			printf("You are a noob coder and beginner as well.");
			continue;
		}
	}
	return 0;
}
