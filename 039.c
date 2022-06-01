#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GenRandNo(int a) {
	srand(time(NULL)); // srand is a function defined in stdlib.h that return value from seed here time(NULL)
	return rand()%a;
}

int main() {
	//printf("Generating random no. between 0 to 3 -> %d",GenRandNo(3));
	char name[10];
	int a,user,uscore=0,cscore=0,rock=0,paper=1,scissor=2;
	printf("Enter your name\n");
	scanf("%s",&name);
	for (int i=0;i<3;i++) {
		printf("Round %d\nEnter \n1. Rock\n2. Paper\n3. Scissor\n",i+1);
		scanf("%d",&user);
		user--;
		a=GenRandNo(2);
		if(user==a) {
			printf("Draw\n\n");
		}
		else if((user==rock && a==paper) || (user==paper && a==scissor) || (user==scissor && a==rock)) {
			cscore++;
			printf("Computer wins this round\n");
		}
		else if((user==paper && a==rock) || (user==scissor && a==paper) || (user==rock && a==scissor)) {
			uscore++;
			printf("%s wins this round\n",name);

		}
		else {
			printf("Invalid choice\n\n");
			i--;
		}
	}
	if (cscore==uscore) {
		printf("The match was draw\n");
	}
	else if(cscore>uscore) {
		printf("Computer Won You Lost\n\n");
	}
	else if(cscore<uscore) {
		printf("%s won\n\n",name);
	}
	printf("\t\tScore\n%s\t\t%d\nComputer\t%d",name,uscore,cscore);
}
