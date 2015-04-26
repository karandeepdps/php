#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void create(struct node *head)
{
	int n,data;
	struct node *neww;
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
	}
	neww->next=NULL;
}
void view(struct node *head)
{
	
	while(head->next!=NULL)
	{
		head=head->next;
		printf("%d\n",head->data);
		
	}
}
void insertb(struct node *head)
{
	int data;
	struct node *neww;
	neww=(struct node *)malloc(sizeof (struct node));
	printf("Enter data\n");
	scanf("%d",&data);
	neww->data=data;
	neww->next=head->next;
	head->next=neww;
}
void inserts(struct node *head)
{
	int n,data;
	printf("Enter node value\n");
	scanf("%d",&n);
	while(n--)
		head=head->next;
	struct node *neww;
	neww=(struct node *)malloc(sizeof (struct node));
	printf("Enter data\n");
	scanf("%d",&data);
	neww->data=data;
	neww->next=head->next;
	head->next=neww;
}
void inserte(struct node *head)
{
	struct node *neww;
	int data;	
	while(head->next!=NULL)
	{
		head=head->next;	
	}
	neww=(struct node *)malloc(sizeof (struct node));
	printf("Enter data\n");
	scanf("%d",&data);
	neww->data=data;
	head->next=neww;
	neww->next=NULL;
}
void sort(struct node *head)
{
	int n,temp;
	printf("Enter numbers to sort\n");
	scanf("%d",&n);
	while(head->next!=NULL)
	{
	for(int i=0;i<=n+1;i++)
	{
		if(head->data>(head->next)->data)
		{
			temp=head->data;
			head->data=(head->next)->data;
			(head->next)->data=temp;
		}
	}
	head=head->next;
}

}

int main()
{
int c;
struct node *head;
head=(struct node *)malloc(sizeof (struct node));
while(1)
{
printf("Enter a choice\n");
printf("1)Create:\n2)View:\n3)Insert Begining:\n4)Insert Specific:\n5)Insert End:\n6)Sort\n");

scanf("%d",&c);
switch(c)
{
case 1:
{
	create(head);
	break;
}
case 2:
{
	view(head);
	break;
}
case 3:
{
	insertb(head);
	break;
}
case 4:
{
	inserts(head);
	break;
}
case 5:
{
inserte(head);	
}
case 6:
{
	sort(head);
}






}
}
	return 0;
}