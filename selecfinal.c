#include<stdio.h>
#define max 5
int main()
{
	int i,n,a[max],min,temp,b,c;
	for(i=0;i<max;i++)
	{
		scanf("%d",&a[i]);
	}
for(b=0;b<max;b++)
{
	min=b;
	for(c=b+1;c<max;c++)
	{
		if(a[min]>a[c])
			min=c;
	}
	temp=a[min];
	a[min]=a[b];
	a[b]=temp;
}
for(i=0;i<max;i++)
	{
		printf("%d\n",a[i]);
	}
}