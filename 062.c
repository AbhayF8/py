#include <stdio.h>

// Code needs to be improved as it cant find for big numbers

int factorial(int a) {
	if (a>1) {
		return a* factorial(a-1);
	}
	else {
		return 1;
	}
}

int main() {
	int a,b,n,k;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&n);
	scanf("%d",&k);
	int x=a,y=b;
	
	// (a+b)^4 = a^n-k * b^k
	// Pascals Triangle
	/*							1
	 * 						   1 1
	 * 						  1 2 1
	 * 						 1 3 3 1
	 * 						1 4 6 4 1
	 */
	 
	 for (int i=1;i<k;i++) {
		 x=x*a;
	 }
	 for (int i=1;i<n-k;i++) {
		 y=y*b;
	 }
	 printf("%d",x*y* (factorial(n))/(factorial(k) * factorial(n-k)));
}
