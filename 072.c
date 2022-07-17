#include <stdio.h>
#include <stdlib.h>

struct myArr{
	int total_size;
	int used_size;
	int *ptr;
};

void createArr(struct myArr * a,int tSize, int uSize) {
	//(*a).total_size = tSize;
	//(*a).used_size = uSize;
	//(*a).ptr = (int *) malloc (tSize*sizeof(int));
	
	a->total_size = tSize;
	a->used_size = uSize;
	a->ptr = (int *) malloc (tSize*sizeof(int));
}

void show(struct myArr *a) {
	for (int i = 0; i < a->used_size; i++)
	{
		printf("%d\n",a->ptr[i]);
	}
}

void set(struct myArr *a) {
	for (int i = 0; i < a->used_size; i++)
	{
		printf("Enter element at %d\n",i);
		scanf("%d",&a->ptr[i]);
	}
}

int main(int argc, char *argv[])
{
	struct myArr marks;
	createArr(&marks,10,2);
	set(&marks);
	show(&marks);
	return 0;
}
