#include <stdio.h>
#include <string.h>
/* Structures in C
 * 1. Structure is a user defined data type in C.
 * 2. It can be used to store data of different data types. Eg -> int, char, int array, etc.
 * 3. It is used to to create a complex data type which contains diverse information.
 * 
 * Accessing Structure Members
 * 1. Array elements are accessed using the subscript value.
 * 2. In a similar fashion, structure members are accessed using (.) dot operator.
 * 3. (.) is called as "structure member operator".
 * 4. To access the member of the structure, we use this operator in between "Structure name" and "member name".
 */

struct Student {
	int id;
	float percent;
	char full_name[40];
};

int main() {
	struct Student a1,a2,a3,a4;
	a1.id=1;
	a2.id=2;
	a3.id=3;
	a4.id=4;
	
	a1.percent=82.2;
	a2.percent=92.7;
	a3.percent=72.5;
	a4.percent=89.1;
	
	strcpy(a1.full_name,"Abhay Kumar Patel");
	strcpy(a2.full_name,"Sahil Choudhary");
	strcpy(a3.full_name,"Shreyansh");
	strcpy(a4.full_name,"Topper Chandu");
	
	printf("Id of a1 is %d\n",a1.id);
	printf("Id of a2 is %d\n",a2.id);
	printf("Id of a3 is %d\n",a3.id);
	printf("Id of a4 is %d\n\n",a4.id);
	
	printf("Marks of a1 is %.1f\n",a1.percent);
	printf("Marks of a2 is %.1f\n",a2.percent);
	printf("Marks of a3 is %.1f\n",a3.percent);
	printf("Marks of a4 is %.1f\n\n",a4.percent);
	
	printf("Full name of a1 is %s\n",a1.full_name);
	printf("Full name of a2 is %s\n",a2.full_name);
	printf("Full name of a3 is %s\n",a3.full_name);
	printf("Full name of a4 is %s\n\n",a4.full_name);
}
