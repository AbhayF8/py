#include <stdio.h>

int isPal(int x) {
	int rev=0,original=x;
	while (original!=0) {
		rev=rev*10+original%10; //CodeByHarry 
		original=original/10;
	}
	if (rev==x)
		return 1;
	else 
		return 0;
}

int main() {
	int n;
	printf("Enter a number for checking if it is a palindrome or not\n");
	scanf("%d",&n);
	if (isPal(n)==1)
		printf("Yes\n");
	else
		printf("No\n");
}
