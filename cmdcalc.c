#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argumentcount, char * argumentstrings[]) {
	char *operation=argumentstrings[1];
	int i;
	float j;
	
	if (strncmp(operation,"add",1)==0) {
		for (i=2,j=0;i<argumentcount;i++) {
			j+=atof(argumentstrings[i]);
		}
		printf("%f",j);
	}
	else if (strncmp(operation,"subtract",1)==0) {
		for (i=3,j=atof(argumentstrings[2]);i<argumentcount;i++) {
			j-=atof(argumentstrings[i]);
		}
		printf("%f",j);
	}
	else if (strncmp(operation,"multiply",1)==0) {
		for (i=3,j=atof(argumentstrings[2]);i<argumentcount;i++) {
			j*=atof(argumentstrings[i]);
		}
		printf("%f",j);
	}
	else if (strncmp(operation,"divide",1)==0) {
		for (i=3,j=atof(argumentstrings[2]);i<argumentcount;i++) {
			j/=atof(argumentstrings[i]);
		}
		printf("%f",j);
	}
}
