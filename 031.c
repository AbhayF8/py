#include <stdio.h>
#include <string.h>

// HTML Parser Excercise by CodeWithHarry
// Input -> <h1> This is a heading </h1>
// Output -> This is a heading

int parser(char *a) {
	int in=0; // are we inside html tag
	int index=0;
	
	for (int i=0;i<strlen(a);i++) {
		if (a[i]=='<') {
			in=0;
			continue;
		}
		else if (a[i]=='>') {
			in=1;
			continue;
		}
		if (in==1) {
			a[index]=a[i];
			index++;
		}
	}
	a[index]='\0';
	// remove trailing spaces from the beginning
	while (a[0]==' ') {
		for (int i=0;i<strlen(a);i++) {
			a[i]=a[i+1];
		}
	}
	// remove trailing spaces from the end
	while (a[strlen(a)-1]==' ') {
		a[strlen(a)-1]='\0';
	}
	return 0;
}

int main() {
	char string[]="<h1>        This is a heading          </h1>";
	
	parser(string);
	printf("The parsed string is ~~%s~~",string);
}
