#include<stdio.h>
long long unsigned int fact(long long unsigned int n,long long unsigned int e)
{
	int ans=1;
	while(n!=e)
		{
			ans=ans*n;
			n--;
			fact(n,e);
		}
		if(n==e)
			return ans;
		else
			return 0;
}
int main()
{
	long long unsigned int t,n,r,a,b;
	scanf("%llu",&t);
	while(t--)
	{
		scanf("%llu",&n);
		scanf("%llu",&r);
		a=fact(n,n-r);
		//printf("%llu\n",a);
		b=fact(r,1);
//		printf("%llu\n",b);
		printf("%llu\n",a/b);
		
	}
	return 0;
}