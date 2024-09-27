#include<stdio.h>
#include<conio.h>
void main()
{
	int i,fact=1,n;
	clrscr();
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	fact=i*fact;
	}
	printf("%d",fact);
	getch();

}
