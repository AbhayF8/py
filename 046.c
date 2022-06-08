#include <stdio.h>  

/* #include and #define preprocessors in C
 * The #include directive
 * 1. The #include directive causes the precprocessor to fetch the contents of some other file to be included in the present file.
 * 2. This file may in turn #include some other file(s) which may in turn do the same.
 * 3. Most commnly the #included files have a ".h" extensions, indicating that they are header files.
 * 
 * Two Common #include formats
 * 1. In C programming there are two common formats for #includes:
 * i> #include <headerFile.h> // The angle brackets say to look in the standard system directory.
 * ii> #include "myFile.h" // The quotation marks say to look in the current directory.
 * 
 * 2. Disk drive full path is allowed, but discouraged since it is not portable:
 * i> #include </home/abhay/CLibrary/somefile.h> //Too specific
 * ii> #include <sys/file.h> // Relative and portable path to the standark locations.
 * 
 * The #define directive
 * 1. The #define directive is used to "define" preprocessors "variables".
 * 2. The #define preprocessor directive can be used to globally replace a word with a number.
 * 3. It acts as if an editor did a global search-and-replace edit of the file.
 * 
 * Using #define for debugging
 * 1. #define directive can be used for debugging
 * 2. We can have printing statements that we only want active when debugging.
 * 3. We can "protect" them in a "ifdef" block as follows:
 * 
 * Macros using #define
 * 1. We can also create macros using #define
 * 2. Macros operate much like functions, but because they are expanded in place and are generally faster.
 * Eg ->
 * #define pi 3.14
 * #define square(x) x*x
 * 
 * area = pi * square(radius) ;
 * area = 3.14 * radius * radius ; // compiler sees the above like this
 */

// #include "044.c" // include a header file in the current directory
// #include </home/abhay/py/044.c> // in the current directory
// #include "funcs/maps.c"
#define pi 3.14
#define square(x) x*x

int main() {
	printf("The value of pi is %f \n",pi);
	printf("The area of a circle of radius 5 is %f",pi*square(6));
}
