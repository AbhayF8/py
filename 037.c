#include <stdio.h>
//#include "fibonacci.c"

/* Storage Class in C
 * What is a Storage Class?
 * A storage class defines following attributes aboout a variable:
 * 1. scope (uplapdhta)
 * 2. default initial value 
 * 3. lifetime (kab tak)
 * 
 * Most used
 * 1. Automatic Variables
 * 2. External Variables
 * 3. Static Variables
 * 4. Register Variables
 * 
 * Automatic Variables
 * Scope - Local to function body they are defined in
 * Default Value - Garbage value (a random value)
 * Lifetime - Till the end of the function block they are defined in
 * A variable defined without any storage class specification is by default an automatic variable
 * int harry and auto int harry are same.
 * 
 * External Variables
 * They are same as global variables.
 * Scope - Global to the program they are defined in
 * Default Value - 0
 * Lifetime - These variables are declared outside any function. They are available throughout the lifetime of the program.
 * A global variable can be changed by any function in the program.
 * int harry defined outside any function will tell the compiler that harry is a global variable.
 * It is recommended to minimize the use of unnecessary global variables in a program.
 * 
 * Extern keyword
 * extern keyword is used to inform our C compiler that a given variable is declared somewhere else.
 * Using extern will not allocate space for the variable
 * Eg -> harry.c 
 * int main() {
	 int harry=74;
	 * printf("%d",harry);
	 * }
	 * main.c
	 * #include "harry.c"
	 * extern int harry;
	 * int main(){
	 * harry=64;
	 * printf("%d",harry);
	 * }
 * Static Variables
 * Scope - Local to the block they are defined in
 * Default Value - 0
 * Lifetime - They are available throughout the lifetime of the program
 * A static variable remains under existance for use within the function for entire program run.
 * static int harry written inside any function will tell the compiler that harry is a static variable.
 * It is recommended to minimize the use of static variables in a program.
 * 
 * Register Variables
 * Scope - Local to the function they are defined in
 * Default Value - Garbage value 
 * Lifetime - They are available till the end of the function block in which the variable is defined.
 * Register variables requests the compiler to store the variables in the CPU register instead of storing in the memory to have faster access.
 * Generally this is done for variable which are being used frequenctly.
 * 
 * Declaration - Telling the compiler about the variable (no space reservation)
 * Definition -  Declaration + space reservation
 */
 
int sum;

int s() {
	static int myVar;
	myVar++;
	printf("Static variable myVar is %d\n",myVar);
	return myVar;
}
int l(int a,int b) {
	//auto int sum=a+b;
	extern int sum;
	sum=5; // This changes the value of global sum due to use of extern
	return sum;
}
int main() {
	//fibonacci(45);
	//printf("The sum is %d",sum);
	printf("The sum is %d\n",l(4,5));
	register int myVar=s();
	myVar=s();
	myVar=s();
	myVar=s();
	printf("%d\n",myVar);
	printf("Value of Variable sum is %d",sum);
}
