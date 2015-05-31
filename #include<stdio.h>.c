#include<stdio.h>
int main()
{
long long t,n,r,i,a;
scanf("%lld",&t);
while(t--)
	{
		a=1;
		scanf("%lld %lld",&n,&r);
		for(i=0;i<r;i++)
		{
			a=a*(n-i);
			a=a/i+1;
		}
			printf("%lld\n",a);
		}
		
		return 0;
	}