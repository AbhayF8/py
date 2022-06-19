#include <stdio.h>
#include <string.h>

void help() {
	printf("\nUsage -> ./executable add/sub/div/mul first second\n");
}

int main(int argumentcount,char *argumentvalue[]) {
	int operator; // 1 for add 2 for subtract 3 for multiply 4 for divide
	if (strncmp(argumentvalue[1],"add",1)==0) {
		operator=1;
	}
	else if(strncmp(argumentvalue[1],"subtract",1)==0) {
		operator=2;
	}
	else if(strncmp(argumentvalue[1],"multiply",1)==0) {
		operator=3;
	}
	else if(strncmp(argumentvalue[1],"divide",1)==0) {
		operator=4;
	}
	else {
		printf("Invalid choice");
	}

	float second;
	sscanf(argumentvalue[2],"%f",&second);
	float third;
	sscanf(argumentvalue[3],"%f",&third);
	switch (argumentcount) {
		case(4) : {
			switch(operator) {
				case(1) : {
					printf("The addititon of %f and %f is %f",second,third,second+third);
					break;
				}
				case(2) : {
					printf("The subtraction of %f and %f is %f",second,third,second-third);
					break;
				}
				case(3) : {
					printf("The multiplication of %f and %f is %f",second,third,second*third);
					break;
				}
				case(4) : {
					printf("The division of %f from %f is %f",second,third,second/third);
					break;
				}
			}
			break;
			default : {
				help();
				break;
			}
		}
	}
}
