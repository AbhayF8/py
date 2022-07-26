#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node * next;
};

struct Node * createNode() {
	return (struct Node *) malloc (sizeof(struct Node));
};

void traverseLink(struct Node* ptr) {
	while (ptr!=NULL)
	{
		printf("The element is %d\n",ptr->data);
		ptr=ptr->next;
	}
}

struct Node *rm1(struct Node *head) {
	struct Node *ptr;
	ptr=head;
	head=head->next;
	free(ptr);
	return head;
};

void deleteBetween(struct Node *head,int index) {
	struct Node *ptr;
	while (index>1)
	{
		head=head->next;
		index--;
	}
	ptr=head->next;
	head->next=ptr->next;
	free(ptr);
};

void deleteEnd(struct Node *head) {
	struct Node *ptr,*q;
	while (head->next->next!=NULL)
	{
		head=head->next;
	}
	ptr=head->next;
	q=ptr->next;
	head->next=NULL;
	free(ptr);
	free(q);
};

void deleteDataNode(struct Node *head, int data) {
	struct Node *ptr;
	while (head->next->data!=data)
	{
		head=head->next;
	}
	ptr=head->next;
	head->next=ptr->next;
	free(ptr);
}

int main(int argc, char *argv[])
{
	struct Node * head;
	
	struct Node * a;
	struct Node * b;
	struct Node * c;
	struct Node * d;
	struct Node * e;
	struct Node * f;
	
	head=createNode();
	
	a=createNode();
	b=createNode();
	c=createNode();
	d=createNode();
	e=createNode();
	f=createNode();
	
	head->data=1;
	head->next=a;
		
	a->data=2;
	a->next=b;	
	b->data=3;
	b->next=c;	
	c->data=4;
	c->next=d;	
	d->data=5;
	d->next=e;	
	e->data=6;
	e->next=f;	
	f->data=7;
	f->next=NULL;
	
	// delete head 
	struct Node *g;
	g=rm1(head);
	
	// delete in between
	deleteBetween(g,3);
	
	// delete in end
	deleteEnd(g);
	
	// delete the first data's node given
	deleteDataNode(g,3);
	
	traverseLink(g);
	return 0;
}
