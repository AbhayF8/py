#include <stdio.h>

int fib_recursive(int n) {
	if (n==0 || n==1) {
		return n;
	}
	else {
		return (fib_recursive(n-1)+fib_recursive(n-2));
	}
}

int fib_iterative(int n) {
	int a,b;
	a=0;
	b=1;
	for (int i=1;i<n+1;i++) {
		b=a+b;
		a=b-a;
	}
	return a;
}

int main () {
	int number;
	printf("Enter the index you want the fibonacci number for ?\n> ");
	scanf("%d",&number);
	printf("The value of fibonacci number at index using iterative approach %d is %d\n",number,fib_iterative(number));
	printf("The value of fibonacci number at index using recursive approach %d is %d\n",number,fib_recursive(number));
}

/* Why recursion is not always good?
 * 1. Recursion is good approach when it comes to problem solving.
 * 2. However, programmer needs to evaluate the need and impact of using recursive/iterative approach while solving a particular problem.
 * 3. In case of factorial calculation, recursion saved a lots of lines of codes.
 * 4. However in case of Fibonacci series, recursion resulted in some extra unnecessary function calls which was an extra overhead.
 * 5. Running time for Fibonacci series grows exponentially with input in case of recursive approach.
 */
