#include<stdio.h>
struct complex
{
  int real, img;
};
int main()
{
struct complex a,b;
int ch;
printf("Please enter a+ib\n");
printf("Please enter a\n");
scanf("%d",&a.real);
printf("Please enter b\n");
scanf("%d",&a.img);
printf("Please enter c+id\n");
printf("Please enter c\n");
scanf("%d",&b.real);
printf("Please enter d\n");
scanf("%d",&b.img);
printf("What would you like to do\n");
printf("1)Add\n");
printf("2)Subtract\n");
printf("3)Multiply\n");
printf("4)Divide\n");
scanf("%d",&ch);
switch(ch)
{
	case 1:
	{
		printf("%d %di\n",a.real+b.real,a.img+b.img);
		break;
	}
	case 2:
	{
		printf("%d %di\n",a.real-b.real,a.img-b.img);
		break;
	}
	case 3:
	{
		int q=a.real*b.real;
		int w=a.real*b.img;
		int e=a.img*b.real;
		int r=-1*(a.img*b.img);
		printf("%d +%di\n",q+r,w+e);
		break;
	}
	case 4:
	{
		int q=a.real*b.real;
		int w=-1*(a.real*b.img);
		int e=a.img*b.real;
		int r=(a.img*b.img);
		int o=q+r;
		int p=w+e;
		a.real=b.real;
		a.img=b.img;
		b.real=a.real;
		b.img=-1*b.img;
		q=a.real*b.real;
		w=a.real*b.img;
		e=a.img*b.real;
		r=-1*(a.img*b.img);
		o=o/(q+r);
		p=p/(q+r);
		printf("%d %di\n",o,p);

		break;
	}
}




	return 0;
}