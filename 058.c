#include <stdio.h>

/* Callback functions using function pointers 
 * Function Pointers
 * 1. We can have pointers pointing to functions as well.
 * 2. Function pointers point to code and not data.
 * 3. Function pointers are useful to implement callback functions.4. Un like normal pointers, we do not allocate de-allocate memory using function pointers.
 * 
 * Callback Functions
 * 1. Function pointers are used to pass a function to a function.
 * 2. This passed function can then be called again (hence the name callback function).
 * 3. This provides programmer to write less code to do more stuff.
 */

int sum(int a, int b) {
	return a+b;
}

float avg(float a,float b) {
	return (a+b)/2;
}

void greetAndExecute(int (*fptr)(int,int)) {
	printf("Hello User!\n");
	printf("The sum of 3 and 5 is %d\n",fptr(3,5));
}

void greetGoodMorningAndExecute(int (*fptr)(int,int)) {
	printf("Good Morning!\n");
	printf("The sum of 9 and 4 is %d\n",fptr(9,4));
}

void greetGoodAfternoonavg(float (*ptr)(float,float)) {
	printf("Good Afternoon!\n");
	printf("The avg of 4 and 6 is %.1f\n",ptr(4,6));
}

void greetGoodEveningavg(float (*ptr)(float,float)) {
	printf("Good Evening!\n");
	printf("The avg of 1 and 2 is %.1f\n",ptr(1,2));
}

int main() {
	int (*fptr) (int,int);
	fptr=sum; // Same as &sum
	greetAndExecute(fptr);
	greetGoodMorningAndExecute(fptr);
	float (*ptr)(float,float);
	ptr=avg; // Same as &avg
	greetGoodAfternoonavg(ptr);
	greetGoodEveningavg(ptr);
}
