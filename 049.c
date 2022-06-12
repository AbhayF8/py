#include <stdio.h>
/* Palindrome Excercise
 * isPalindrome();
 * was not able to reverse the number. used concept from javatpoint
 */

int isPal(int a) {
	int m=0,rem,n;
	n=a;
	while(n!=0) {
		rem=n%10;
		m=m*10+rem;
		n/=10;
	}
	if(a==m) {
		return 1;
	}
	else
	return 0;
}

int main() {
	int number;
	printf("Enter a number to check whether its palindrome or not\n");
	scanf("%d",&number);
	if (isPal(number)==1) {
		printf("Yes");
	}
	else {
		printf("No!");
	}
}
