#include <stdio.h>
#include <stdlib.h>

struct Node  {
	int data;
	struct Node * next;
};

struct Node* createnode() {
	return (struct Node*) malloc (sizeof(struct Node));
}

void traverseLink(struct Node *ptr) {
	while (ptr!=NULL)
	{
		printf("Element is  %d\n",ptr->data);
		ptr=ptr->next;
	}
}

struct Node* atStart(struct Node *head, int data) {
	struct Node *ptr;
	ptr = createnode(); 
	ptr->data=data;
	ptr->next=head;
	return ptr;
}

struct Node* afterNode(struct Node *head, struct Node *target, int data) {
	struct Node * ptr;
	ptr = createnode();
	ptr->data=data;
	ptr->next=target->next;
	target->next=ptr;
	return ptr;
}

struct Node* afterIndex(struct Node *head,int index, int data) {
	struct Node *ptr;
	ptr = createnode(); 
	ptr->data=data;
	for (int i = 1; i < index; i++)
	{
		head=head->next;
	}
	ptr->next=head->next;
	head->next=ptr;
	return ptr;
}

struct Node* atEnd(struct Node *head, int data) {
	struct Node *ptr;
	ptr = createnode(); 
	ptr->data=data;
	while (head->next!=NULL)
	{
		head=head->next;
	}
	head->next=ptr;
	ptr->next=NULL;
	return ptr;
}

int main(int argc, char *argv[])
{
	struct Node * a;
	struct Node * b;
	struct Node * c;
	struct Node * d;
	struct Node * e;
	struct Node * f;
	struct Node * g;
	struct Node * h;
	struct Node * i;
	struct Node * j;
	struct Node * k;
	a = createnode();
	b = createnode();
	c = createnode();
	d = createnode();
	e = createnode();
	f = createnode();
	g = createnode();
	h = createnode();
	i = createnode();
	j = createnode();
	k = createnode();
	a->data=3;
	a->next=b;
	
	b->data=9;
	b->next=c;
	
	c->data=2;
	c->next=d;
	
	d->data=19;
	d->next=e;
	
	e->data=11;
	e->next=f;
	
	f->data=12;
	f->next=g;
	
	g->data=113;
	g->next=h;
	
	h->data=83;
	h->next=i;
	
	i->data=93;
	i->next=j;
	
	j->data=68;
	j->next=k;
	
	k->data=38;
	k->next=NULL;
	
	// insert in beginning
	struct Node * l; // l is now the head
	l=atStart(a,78);
	
	// insert in between
	struct Node * m;
	m=afterIndex(l,5,69);
	
	// insert after node
	struct Node* n;
	n=afterNode(l,j,123);
	
	// insert at last
	struct Node *o;
	o=atEnd(l,96);
	
	traverseLink(l);
	
	printf("At last print all the things that were added in linked list At beginning %d after index 5 is %d after node j is %d and at end %d\n",l->data,m->data,n->data,o->data);
	return 0;
}
