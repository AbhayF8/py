#include <stdio.h>

/* Static Variables in C
 * Recap 
 * 
 * Local variables
 * 1. Scope is a region of the program where a defined variable can exist and beyond which it cannot be accessed.
 * 2. Variables which are accessed inside a function or a block are called local variables.
 * 3. They can only be accessed by the function they are declared in!
 * 4. They are inaccessible to the functions outside the function they are declared in!
 * 
 * Global variables
 * 1. These are the variables defined outside the main method.
 * 2. Global variables are accessible throughout the entire program from any function.
 * 3. If a local and global variable has the same name, the local variable will take preference.
 * 
 * Formal arguments
 * 1. These variables are treated as local variables with-in a function.
 * 2. These variables take precedence over global variables.
 * 
 * Static variables 
 * 1. Static variables are variables which have a property of perserving their values even when they go out of scope.
 * 2. They preserve their value from the previous scope and are not initialized again.
 * 3. Static variable remains in memory throughout the span of the program.
 * 4. Static variables are initialized to 0, if not initialized explicitly.
 * 5. In C, static variables can only be initialized using constant literals.
 */

int global=5;
int fx1(int a) {
	int b1=8,b2=2;
	return b1+global+b2;
}
int fx2() {
	static int a1;
	printf("The value of static a1 is %d\n",a1);
	a1++;
	return a1;
}

int main() {
	int a=1;
	global=99;
	printf("The value of fx1 is %d\n",fx1(a));
	printf("The value of a is %d\n",a);
	printf("The value of global is %d\n",global); //local is preffered
	int b=fx2();
	b=fx2();
	b=fx2();
	printf("Value of b is %d",b);
	
	// static a2=fx1(a);
	// printf("Value of a2 is %d",a2);

	// printf("The value of b2 from fx1 is %d\n",b2);
}
