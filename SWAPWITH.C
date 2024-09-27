#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("enter two values to swap\n");
	scanf("%d\n%d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("values=%d\n%d:\n",x,y);
	getch();
}
