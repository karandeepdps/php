#include<stdio.h>
#define s(n) scanf("%d",&n);
#define p(n) printf("%d\n",n);
int main()
{
int n,a[10000],i,sum=0;
s(n);
for(i=0;i<n;i++)
{
s(a[i]);
sum=sum+a[i];
if(a[i]==0 && i!=0)
{
	i--;
	n--;
	sum=sum-a[i];
	i--;
	n--;
}
}
p(sum);
	return 0;
}