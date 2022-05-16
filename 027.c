#include <stdio.h>

/* Unions in C
 * 1. Union is a userdefined data type (very similar to structure)
 * 2. The difference between structures and unions lies in the fact that in structure, each member has its own storage location, whereas members of a union uses a single shared memory location.
 * 3. This single shared memory location is equal to the size of its largest data member.
 * 4. Like structures, we use the dot operator to access the members of union.
 * 5. We use keyword union to define a union.
 * 6. Syntax is similar to struct.
 */

union Student {
	int marks;
	float percent;
	char fav_char;
};

int main() {
	union Student a;
	a.fav_char='$';
	a.marks=5;
	a.percent=332.11;
	printf("The size of union is %lu\n",sizeof(a));
	printf("Value of int marks in union Student is %d\n",a.marks); // Will not be printed because shared memory and float took it
	printf("Value of float percent in union Student is %f\n",a.percent);
	printf("Value of char fav_char in union Student is %c\n",a.fav_char);
}
