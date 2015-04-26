#include<stdio.h>
int main()
{
int i,a[10],n,sw;
printf("Enter numbers to inserted\n");
scanf("%d",&n);
if(n<=10)
{
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}}
else
printf("Overflow");
while(1)
{
printf("What you want to do\n1.push\n2.pop\n3.print\n");
scanf("%d",&sw);
switch(sw)
{
	case 1:
	{
		if(i!=10)
		{
		printf("Enter new value to push\n");
		scanf("%d",&a[i]);
		i++;
		break;
		}
		else
			printf("Overflow\n");
		break;
	}
	case 2:
	{
		if(i!=0)
		{
		i--;
		printf("Succesfully poped\n");
		break;
		}
		else
			printf("Underflow\n");
		break;
	}
	case 3:
	{
		for(int j=0;j<i;j++)
		printf("%d\n",a[j]);
		break;
	}
}
}
	return 0;
}