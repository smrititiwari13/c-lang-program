#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("enter two values to swap");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;

	printf("swapped value=%d\n%d",a,b);
	getch();

}