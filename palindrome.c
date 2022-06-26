#include <stdio.h>

int isPal(int a) {
	int rev=0,orig=a;
	
	while (orig!=0) {
		rev=rev*10+orig%10;
		orig=orig/10;
	}
	
	if (a==rev) {
		return 1;
	}
	return 0;
}

int main() {
	int testcases,start,end,n=0;
	scanf("%d",&testcases);
	
	for (int i=0;i<testcases;i++) {
		scanf("%d",&start);
		scanf("%d",&end);
		for (int j=start;j<end+1;j++) {
			if (isPal(j)==1) {
				n++;
			}
		}
		printf("%d\n",n);
		n=0;
	}
	return 0;
}
