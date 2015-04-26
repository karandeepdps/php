#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node * create(struct node *head)
{
	int n,data;
	struct node *neww,*top;
	printf("Enter n\n");
	scanf("%d",&n);
	while(n--)
	{
	neww=(struct node *)malloc(sizeof (struct node));
	printf("Enter data\n");
	scanf("%d",&data);
	neww->data=data;
	head->next=neww;
	head=head->next;
	top=neww;
	top->prev=head;
	}
	neww->next=NULL;
	top=neww;
	return(top);
}
void view(struct node *head)
{
	
	while(head->next!=NULL)
	{
		head=head->next;
		printf("%d\n",head->data);
		
	}
}
void push(struct node *head,struct node *top)
{
	int data;
	struct node *neww;
	if(head->next==NULL)
	{
		printf("create list first");
	}
	else
	{
	neww=(struct node *)malloc(sizeof (struct node));
	printf("Enter data\n");
	scanf("%d",&data);
	neww->data=data;
	top->next=neww;
	top->prev=top;
	neww->next=NULL;
	top=neww;
}
}
void pop(struct node *head)
{
	struct node *prevv;
	if(head->next==NULL)
	{
		printf("Overflow\n");
	}
	else{
	while(head->next!=NULL)
	{
		prevv=head;
		head=head->next;
	}
	prevv->next=NULL;}
}

int main()
{
int c;
struct node *head,*top;
head=(struct node *)malloc(sizeof (struct node));
while(1)
{
printf("Enter a choice\n");
printf("1)Create:\n2)View:\n3)Push:\n4)Pop:\n");

scanf("%d",&c);
switch(c)
{
case 1:
{
	top=create(head);
	break;
}
case 2:
{
	view(head);
	break;
}
case 3:
{
	push(head,top);
	break;
}
case 4:
{
	pop(head);
	break;
}
}
}
	return 0;
}