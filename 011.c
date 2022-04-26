#include <stdio.h>

/* Recursion in C
 * 1. Recursive functions or recursion is a process when a function call a copy of itself to work on a smaller problem.
 * 2. Any function which calls itself is called a recursive function.
 * 3. A termination condition is imposed on such functions to stop them executing copies of themselves forever.
 * 4. Any problem that can be solved with recursion can also be solved iteratively.
 * Why recursion
 * 5. However some problems are best suited to be solved using recursion.
 * 6. For Example -> tower of Hanoi, Fibonacci series, factorial finding, etc.
 */

// Example of Factorial Calculator 
// 1. The case at which the function doesn't recur is called the base case.
// 2. The instance where the function keeps calling itself to perform a subtask, is called the recursive task.
// 3. For factorial calculation the base case occurs at the parameter value of 0 and 1.

int factorial(int number) {
	if (number == 1 || number ==0) {
		return 1;
	}
	else {
		return number*(factorial(number-1));
	}
}

int main() {
	int num;
	printf("Enter the no. for which u want the factorial for\n> ");
	scanf("%d",&num);
	printf("\nThe factorial of %d is %d",num,factorial(num));
}
