/*
 * HackerEarth Divisibility Practise
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

#include <stdio.h>

int main(){
	int N = 0;
	scanf("%d", &N);
	
	long data[N];
	for(int i=0; i<N; i++)
	    scanf("%ld", &data[i]);
	
    // write your code here
    if (data[N-1]%10) {
		printf("No");
	}
	else {
		printf("Yes");
	}
    // ans = 
    return 0;
}
