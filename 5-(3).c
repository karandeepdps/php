#include<stdio.h>
#include<string.h>
int main()
{
int n,l,i,top=0;
char a[100],b[100]={0};
printf("Enter string\n");
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
	if(a[i]=='a' ||a[i]=='b' ||a[i]=='c' ||a[i]=='d' ||a[i]=='e' ||a[i]=='f' ||a[i]=='g' ||a[i]=='h' ||a[i]=='i' ||a[i]=='j' ||a[i]=='k')
		printf("%c",a[i]);
	else if(a[i]=='+' || a[i]=='-')
	{
		if (b[top-1]=='*'||b[top-1]=='/')
		{
			while(b[top-1]=='*'||b[top-1]=='/')
			{
				printf("%c",b[top-1]);
				top--;
			}
			b[top]=a[i];
			top++;
		}
		else
		{
		b[top]=a[i];
		top++;
		}
	}
	else if(a[i]=='*' || a[i]=='/')
	{
		/*if(b[top-1]=='+'||b[top-1]=='-')
		{
			while(b[top-1]=='+'||b[top-1]=='-')
			{
				printf("%c",b[top-1]);
				top--;
			}
			b[top]=a[i];
			top++;
		}
		else
		{*/
			b[top]=a[i];
			top++;
		
	}
}
while(top--)
{
	printf("%c",b[top]);
}
printf("\n");
	return 0;
}