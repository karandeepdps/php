#include<stdio.h>
int a[50];
int rear =-1;
int front =-1;
void insert()
{
    int data;
    if (rear == 50)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &data);
        rear = rear + 1;
        a[rear] = data;
    }
}
void delet()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", a[front]);
        front = front + 1;
    }
}
void displa()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
}

int main()
{
int ch;
while(1)
{
	printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
scanf("%d",&ch);
 switch (ch)
        {
            case 1:
            {insert();
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
	return 0;
}
