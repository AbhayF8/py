#include <stdio.h>

/* File I/O in C
 * Files
 * 1. Files are used to store data and information.
 * 2. Files are used to read & access data anytime from the hard disk.
 * 3. Files make it easy for a programmer to access and store content without losing it on program termination.
 * 
 * Volatile Vs Non Volatime Memory
 * Volatile Memory 
 * 1. is computer storage that only maintains its data while the device is powered.
 * 2. The RAM will hold data,programs and information as long as it has a constant power supply but immediately the power is interrupted all that content is cleared.
 * 3. The Volatile memory will only hold data temporarily.
 * 
 * Non Volatile Memory1. is computer memory that can retain the stored information even when not powered.
 * 2. This type of memory is also referred to as permanent memory since data stored within it can be retrieved even when there is no constant power supply.
 * 3. It is used for the long-term storage of data.
 *
 * Why do we need a file?
 * 1. When a C program is terminated, the data stored in ram is lost.
 * 2. Storing in a file will preserve our data even after the program terminates.
 * 3. RAM is not able to handly quite large amount of data due to its small size relative to the hard disk.
 * 4. It is easy to transfer data as files.
 * 
 * Types of Files
 * 1. There are two types of files - Text files and Binary files
 * 
 * File operations in C
 * In C we can perform these high level operations on files :
 * 1. Creating a new file
 * 2. Opening a file
 * 3. Closing a file
 * 4. Reading from and writing to a file.
