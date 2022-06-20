#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argumentcount, char * argumentstrings[]) {
	char *operation=argumentstrings[1];
	int i,j;
	
	if (strncmp(operation,"add",1)==0) {
		for (i=2,j=0;i<argumentcount;i++) {
			j+=atoi(argumentstrings[i]);
		}
		printf("%d",j);
	}
	else if (strncmp(operation,"subtract",1)==0) {
		for (i=3,j=atoi(argumentstrings[2]);i<argumentcount;i++) {
			j-=atoi(argumentstrings[i]);
		}
		printf("%d",j);
	}
	else if (strncmp(operation,"multiplication",1)==0) {
		for (i=3,j=atoi(argumentstrings[2]);i<argumentcount;i++) {
			j*=atoi(argumentstrings[i]);
		}
		printf("%d",j);
	}
	else if (strncmp(operation,"divide",1)==0) {
		for (i=3,j=atoi(argumentstrings[2]);i<argumentcount;i++) {
			j/=atoi(argumentstrings[i]);
		}
		printf("%d",j);
	}
}
