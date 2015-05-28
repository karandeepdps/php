#include<stdio.h>
int max(int arr[],int n)
{
	int ans=0,sum=0;
	for(int i=0;i<n;i++)
	{
		if(sum+arr[i]>0)
			sum=sum+arr[i];
		else
			sum=0;
		if(ans>=sum)
			ans=ans;
		else
			ans=sum;
	}
	return ans;
}
int main()
{
	int a[100000],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
printf("%d\n",max(a,n));



	return 0;
}