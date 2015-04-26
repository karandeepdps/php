#include<stdio.h>
#define max 5
int front=-1,rear=-1,a[max];
void insert()
{	
	if(front==-1 && rear==-1)
		{front++;
	rear++;}
	int data;
	printf("Please enter value to insert\n");
	scanf("%d",&data);
	a[rear%max]=data;
	if(rear==-1)
		rear++;
	else
	rear=((rear +1)%max);
	printf("\n");
}
void delet()
{
	if(front==-1)
		printf("Error\n");
	front=(front+1)%max;
	printf("\n");
}
void displa()
{
	int i;
	for(i=front;i<front+max;i++)
		printf("%d ",a[i]);
	printf("\n");
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n");
		printf("Select an option:\n");
		printf("1:Insert\n2:Delete\n3:See\n");
		scanf("%d",&ch);
		printf("-------------------------\n");
		switch(ch)
		{
			case 1:
			{
				insert();
				break;
			}
			case 2:
			{
				delet();
				break;
			}
			case 3:
			{
				displa();
				break;
			}

		}
	}
}