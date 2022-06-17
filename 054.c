#include <stdio.h>

/* Commandline arguments in C
 * What are command line arguments?
 * 1. Command line argument is an important concept in C programming.
 * 2. Sometimes we need to pass arguments from the command line to the program a set of inputs.
 * 3. Command line aguments are used to supply parameters to the program when it is invoked.
 * 4. It is mostly used when you need to control your program from the console.
 * 5. These arguments are passed to the main() method. 
 * Eg -> 1. sudo pacman -Syu
 * 2. sudo apt install python-pip
 * 3. brew install openjdk17
 * 4. git status
 * 5. pip install pyqt5
 * 6. sudo xbps-install -Su mpv
 * 
 * Sample Program
 * #include <stdio.h>
 * int main(int argc, char* argv[]) {
 * 		printf("argc is %d\n",argc);
 * 		if (argc >= 2) {
 * 			printf("The arguments supplied are:\n");
 * 			for (int i=0;i<argc;i++) {
 * 				printf("%s\t",argv[i]);
 * 			}
 * 		}
 * return 0;
 * }
 */

int main(int argc, char* argv[]) {
	printf("argc is %d\n",argc);
	if (argc >= 2) {
		printf("The arguments supplied are:\n");
		for (int i=0;i<argc;i++) {
			printf("%s \t",argv[i]);
		}
	}
}
