#include <stdio.h>

/* Loops in C
*
* Advantages of Loops
* 1. Code Reusability
* 2. Saves time
* 3. Traversing
* 
* Types of Loops
* 1. Do while loop -> executes atleast once
* 2. while loop
* 3. for loop
* 
* Do while loop
* Syntax
* do { 
* code to be executed } while (condition)
* 
*/
int main() {
	int num,i=0;
	printf("Enter a number for countdown from where to start countdown! \n> ");
	scanf("%d",&num);
	do {
	num=num-1;
	printf("%d\n",num);
	}
	while (i<num);
	
/*
 * while loop
 * while(condition) {
 * code to be executed }
 */
	int n,index=0;
	printf("Enter a number for countup\n> ");
	scanf("%d",&n);
	while (index<n) {
		printf("%d\n",index);
		index=index+1;
	}
	/*
	 * For loop
	 * for (expression 1; expression 2; expression 3) {
	 * code to be run
	 * }
	 * 
	 * expression 1 ->
	 * 1. initialisation of the loop variable
	 * 2. we can initialize more than one variable
	 * 3. optional //if variable is already initialised
	 * 
	 * expression 2 ->
	 * 1. conditional expression
	 * 2. can have more than one condition. however the loop will iterate until the last condition becomes false. other conditions will be treated as conditions
	 * 3. optional
	 * 4. can perform the task of e1 and e3 as well.
	 * 5. can take both zero and non zero value. But remember in c any non zero value is true and zero value is false.
	 * 
	 * expression 3 ->
	 * 1. variable updater expression.
	 * 2. can update more than one variable.
	 * 3. optional
	 */
	 int a,j;
	 for (a=0,j=0;a<10;a++) { //example of e1 with more than one variable
		 printf("%d %d\n",a,j);
	 }
	 int b=0;
	 for (;b<10;b++) { // example of e1 optional
		 printf("%d",b);
	 }
	 int c=5,d=0;
	 for (;c<15,d < 5  ;d++,c++) { //example of e2 in which only last condition is seen and b4 that everything is a statement
		 printf("\n%d %d",d,c);
	 }
	 int e,f;
	 for (e=0,f=0;e<10;) { // e3 is optional
		 printf("%d %d\n",e,f);
		 e++;f++;
	 }
}
