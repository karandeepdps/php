#include<stdio.h>
#include<string.h>
#define st strlen
#define p printf
#define s(n) scanf("%s",n)
int main()
{
int i,j=0,c=0,n;
char a[100],b[100];
s(a);
s(b);
n=st(a);
while(n--)
{
for(i=0;i<st(a);i++)
{
	if(a[i]==b[j])
	{
b[j]=0;
c++;
j++;
	}
}
}
if(c==st(a))
p("YES\n");
else
p("NO\n");
	return 0;
}