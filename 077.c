#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node * next;
};

void LinkedListTraversal(struct Node *ptr) {
	while (ptr != NULL)
	{
		printf("Element: %d\n",ptr->data);
		ptr=ptr->next;
	}
}

int main(int argc, char *argv[])
{
	// define head, n number of elements
	struct Node *head;
	struct Node *first;
	struct Node *second;
	struct Node *third;
	struct Node *fourth;
	struct Node *fifth;
	
	// dynamically allocate memory for them
	head = (struct Node *) malloc (sizeof(struct Node));
	first = (struct Node *) malloc (sizeof(struct Node));
	second = (struct Node *) malloc (sizeof(struct Node));
	third = (struct Node *) malloc (sizeof(struct Node));
	fourth = (struct Node *) malloc (sizeof(struct Node));
	fifth = (struct Node * ) malloc (sizeof(struct Node));
	
	// head to first node
	head->data = 1;
	head->next = first;
	
	// first to second node
	first->data = 2;
	first->next = second;
	
	// second to third node
	second->data = 3;
	second->next = third;
		
	// third to fourth node
	third->data = 4;
	third->next = fourth;
		
	// fourth to fifth node
	fourth->data = 5;
	fourth->next = fifth;
			
	// fifth to NULL 
	fifth->data = 6;
	fifth->next = NULL;
	
	LinkedListTraversal(head);
		
	return 0;
}
