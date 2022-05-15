#include <stdio.h>

/* typedef in C
 * used to alias an data type.
 * Syntax
 * typedef <old_name> <alias_name>
 */
 
typedef struct Student {
	int id;
	float percent;
	char name[25];
} st;

int main() {
	//~ struct Student a1,a2;
	st a1,a2;
	a1.id=1;
	a2.id=2;
	
	printf("Id of a1 is %d\n",a1.id);
	printf("Id of a2 is %d\n",a2.id);
	
	typedef unsigned long ul;
	ul a3,a4;
	a3=34;
	a4=56;
	
	printf("The value of a3 is %lu\n",a3);
	printf("The value of a4 is %lu\n",a4);
	
	//~ int* a5,a6; // compiler interprets it as int *a,b
	typedef int* intptr;
	intptr a5,a6;
	int c=5,d=2;
	a5=&c;
	a6=&d;
	printf("The address of a5 is %p\n", a5);
	printf("The address of a6 is %p\n", a6);
}
