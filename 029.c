#include <stdio.h>
#include <string.h>
// void parser
void parser(char a[]) {
	int start,end;
	for (int i=0;i<strlen(a)/2;i++) {
		if (a[i]=='>') {
			start=i+2;
			}
		}
	for (int j=strlen(a);j>strlen(a)/2;j--) {
		if (a[j]=='<') {
			end=j-1; }
		}
	printf("For this html tag, start is %d and end is %d\n",start,end);
	for (int k=start;k<end;k++) {
		printf("%c",a[k]);
		}
	printf("\n\n");
}
int main() {
    char string[] = "<h1> this is a heading </h1>";
    char string2[] = "<p> This is a paragraph </p>";
    parser(string);
    parser(string2);
    return 0;
}
/*
Input:
<h1> This is a heading </h1> 

Output:
This is a heading

Input:
<span> This is a heading2 </span> 

Output:
This is a heading2


*/
