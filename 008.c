#include <stdio.h>

/* Goto statement
 * 1. Also called jump statement in c
 * 2. used to transfer program control to a predefined label
 * 3. its use is avoided since it causes confusion for the fellow programmers in understanding the code.
 * 4. goto statement is preferable when we need to break multiple loops using a single statement at the same time.
 */

int main() {
	label:
		printf("We are inside label");
		goto end;
	printf("Hello world!");
	goto label;
	end:
		printf("\nWe are at end");
	
	int num;
	for (int i=0;i<10;i++) {
		printf("%d",i);
		for (int j=0;j<8;j++) { //Nested Loop
			printf("\n%d\nEnter a number. Enter 0 to exit",j);
			scanf("%d",&num);
			if (num==0) {
				goto ending;
			}
		}
	}
	
	 /*
	 * Typecasting in C
	 * Conversion between one data type to other data type
	 * Syntax
	 * (type) value;
	 */
	
	float a=54;
	printf("\nThe value of a is %d",(int)a);
	float b=(float)56/5;
	printf("\nThe value of b is %f",b);
	ending:
	return 0;
}
