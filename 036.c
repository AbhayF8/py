#include <stdio.h>
#include <stdlib.h>

/* Problem Statement:-

Suppose ABC is a private limited company which manages the employee records of other companies. Employee id can be of any length, and it can contain any character. The following are the task you have to perform for three employees.

    Take the length of an employee id as an input and store it in an integer length variable
    Take an employee id as an input and display it on the screen.
    Save the employee id in a character array, which is allocated dynamically.
    Create only one character array dynamically.

Program Example:-

Employee1;

Enter the no. of characters in your employee id: 45

//dynamically allocate the character array

Take input from the user: //employee_id

Employee2;

Enter the no. of characters in your employee id: 5

//dynamically allocate the character array

Take input from the user: //employee_id

Employee3;

Enter the no. of characters in your employee id: 9

//dynamically allocate the character array

Take input from the user: //employee_id

You have to reallocate the memory in such a way so that your program is robust and uses less memory.
*/

void manage() {
	int len;
	char* ptr;
	printf("Employee 1:\nWhat is the length of your eID?\n");
	scanf("%d",&len);
	ptr=(char*)malloc(len*sizeof(char));
	printf("Enter your eID\n> ");
	scanf("%s",ptr);
	printf("Your eID is: \n%s\n\n",ptr);
	
	printf("Employee 2:\nWhat is the length of your eID?\n");
	scanf("%d",&len);
	ptr=(char*)realloc(ptr,len*sizeof(char));
	printf("Enter your eID\n> ");
	scanf("%s",ptr);
	printf("Your eID is: \n%s\n\n",ptr);
	
	printf("Employee 3:\nWhat is the length of your eID?\n");
	scanf("%d",&len);
	ptr=(char*)realloc(ptr,len*sizeof(char));
	printf("Enter your eID\n> ");
	scanf("%s",ptr);
	printf("Your eID is: \n%s\n\n",ptr);
	
}

int main() {
	manage();
}
