#include <stdio.h>
#define pi 3.14
#ifdef pi 
#define light 6*100000 
#endif
#undef pi
#ifndef pi
#define c 6*100000000
#endif
/* Other Directives and Predefined Macros
 * Preprocessor Directives
 * 1. Preprocessor is a kind of automated editor that modifies a copy of the original source code.
 * 2. The #include directive causes the preprocessor to fetch the contents of some other file to be included in the present file.
 * 3. In C programming there two common formats for #includes.
 * 4. This file may in turn #include some other file(s) which may in turn do the same.
 * 5. Most commonly the #included files have a ".h" extension, indicating that they are header files.
 * 6. The #define directive is used to "define" preprocessor "variables".
 * 
 * Other C Preprocessors
 * #undef -> undefines a macro.
 * #ifdef -> if defined 
 * #ifndef -> if not defined
 * #if 
 * #else
 * #elif
 * #pragma -> to issue some special command to the compiler.
 * 
 * Predefined Macros in C
 * 1. __DATE__
 * The current date as character literal in "MMM DD YYYY" format.
 * 2. __TIME__ 
 * This contains the current time as a character literal in "HH:MM:SS" format.
 * 3. __FILE__
 * The current filename as a string literal
 * 4 __LINE__
 * The current line number as a decimal constant.
 * 5. __STDC__
 * Defined as 1(one) when the compiler compiles with the ANSI standard.
 */
 
int main() {
	printf("File name is %s\n",__FILE__);
	printf("Line number is %d\n",__LINE__);
	printf("ANSI: %d\n",__STDC__);
	printf("Today's date and time is %s %s\n",__DATE__,__TIME__);
} 
