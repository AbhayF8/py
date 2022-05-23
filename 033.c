#include <stdio.h>
/* Dynamic Memory Allocation in C
 * What and why Dynamic Memory Allocation?
 * 1. An statically allocated variable or array has a fixed size in memory;
 * 2. We have learnt tot create big enough arrays to fit in our inputs but this doesn't seem like an optimal way to allocate memory.
 * 3. Memory is a very useful resource.
 * 4. Clearly we need a way to requrest memory on runtime.
 * 5. Dynamic Memory Allocation is a way in which the size of a data structure can be changed during the runtime.
 * 
 * Static Memory Allocation    |       Dynamic Memory Allocation
 * 1. Allocation is done before the program's execution.
 * 1. Allocation is done during the program's execution.
 * 2. There is no memory reusability and the memory allocated cannot be freed.
 * 2. There is memory reusability and the allocated memory can be freed when not required.
 * 3. Less efficient.
 * 3. More efficient.
 * 
 * Memory Allocation in C Programs
 * Memory assigned to a program in a typical architecture can be broken down into four segments :
 * 1. Code -> Text segment
 * 2. Static/global variables -> i. data segment (initialized segment) ii. bss segment(uninitialized segment)
 * 3. Stack -> lifo
 * 4. Heap
 * 
 * Stack Overflow
 * 1. Compiler allocates some space for the stack part of the memory.
 * 2. When this space gets exhausted for some bad reason, the situation is called is caleed as stack overflow.
 * 3. Typical example includes recursion with wrong/no base condition.
 * 
 * Use of Heap
 * 1. There are a lot of limitations of stack (static memory allocation)
 * 2. Some of the examples include variable sized array, freeing memory no longer required etc.
 * 3. Heap can be used flexibly by the programmer as per his needs.
 * 4. We can create a pointer in our main function and point to a memory block in the heap.
 * 5. The address is stored by the local variable in the main function.
 * 6. The memory consumed will not get freed automatically in case we overwrite the pointer.
 */
int main() {
	return 0;
}
