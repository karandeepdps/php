#include<stdio.h>
#define max 5
int main()
{
int a[max],b,c,hole,temp,i;
for(i=0;i<max;i++)
{
	printf("Enter %d elelent\n",i);
	scanf("%d",&a[i]);
}
for(b=1;b<max;b++)
{
hole=b;
while(hole>0 && a[hole]<a[hole-1])
{
	temp=a[hole];
	a[hole]=a[hole-1];
	a[hole-1]=temp;
hole--;
}
}
for(i=0;i<max;i++)
{
	printf("%d\n",a[i]);
}









	return 0;
}