#include <stdio.h>

int main()
{
	int a,b,c;
	a=15;
	b=12;
	c=12;
	printf("a + b = %d\n", a+b);
	printf("a - b = %d\n", a-b);
	printf("a / b = %d\n", a/b);
	printf("a * b = %d\n", a*b);
	printf("a remainder of b = %d\n", a%b);
	/*
	 * Arithmetic operators
	 * + Add
	 * - Subtract
	 * * Multiply
	 * / Division (in integer if int taken)
	 * % Remainder or (Modulus)
	 */
	printf("b==c %d", b==c);
	/*
	 * Relational Operators
	 * == is equal to
	 * != is not equal to
	 * > greater than
	 * < less than
	 * >= greater or equal to
	 * <= less or equal to
	 */
	
	/*
	 * Logical Operators
	 * && And
	 * || OR
	 * ! Not
	 */
	 
	 /*
	  * Bitwise Operators (Works on the basis of Bits)(0 & 1)
	  * & And
	  * | OR
	  * ^ XOR one true but another should be false to return true
	  * ~ Binary one's complement
	  * << Binary left shift operator
	  * >> Binary right shift operator
	  * X 	Y 	X&Y 	X|Y 	X^Y
      * 0 	0 	 0 	     0 	     0
      * 0 	1 	 0 	     1 	     1
      * 1 	0 	 0 	     1 	     1
      * 1 	1 	 1 	     1 	     1
	  */
	  
	  /*
	   * Assignment Operators
	   * = LHS = RHS
	   * += Add 1 to LHS
	   * -= Subtract 1 from LHS
	   * *= Multiply by n in LHS
	   * /= Divide by n in LHS
	   */
	   int z=2;
	   z+=2;
	   printf("\n%d",z);
	   
	   /*
	    * Miscellaneous Operators
	    * sizeof() returns size of variable
	    * &a returns the address of a variable
	    * *a pointer to  a variable
	    * ?: Conditional Expression
	    */
	    
	    /* Operator Precedence in C (Just like BODMAS in maths)
	     * In programming languages, the associativity of an operator is a property that determines how operators of the same precedence are grouped in the absence of parentheses.
	     * Postfix      	() [] -> . ++ - - 					Left to right
         * Unary 			+ - ! ~ ++ - - (type)* & sizeof 	Right to left
         * Multiplicative 	* / % 								Left to right
         * Additive 		+ - 								Left to right
         * Shift 			<< >> 								Left to right
         * Relational 		< <= > >= 							Left to right
         * Equality 		== != 								Left to right
         * Bitwise AND 		& 									Left to right
         * Bitwise XOR 		^ 									Left to right
         * Bitwise OR 		| 									Left to right
         * Logical AND 		&& 									Left to right
         * Logical OR 		|| 									Left to right
         * Conditional 		?: 									Right to left
         * Assignment 		= += -= *= /= %=>>= <<= &= ^= |= 	Right to left
         * Comma 			, 									Left to right 
         */
}
