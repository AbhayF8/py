#include <stdio.h>
#include <stdlib.h>

/* What causes Memory leak in C
 * 1. With great power comes great responsibility.
 * 2. Memory leak is caused when we don't use dynamic memory properly.
 * 3. When we keep on allocating memory in the heap without freeing, the overall memory usage keeps on increasing.
 * 4. This situation is the cause of memory leak ie the programmer creates a memory block in the memory and forgets to delete it.
 * 5. To avoid these memory leak situations, memory allocated on heap should always be freed when not needed
 */
 
int main() {
	int i=0;
	int *ptr=NULL;
	while (i<250000) {
		printf("We will simulate memory leak\n");
		ptr=(int *) malloc(1024*1024 * sizeof(int));
		i++;
		if (i%1000==0) {
			getchar();
		}
		free(ptr); // if we dont do this we will encounter memory leak
	}
}
