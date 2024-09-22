#include<stdio.h>
#include<conio.h>
void main()
{
	int i,max=0,n,x;
	clrscr();
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter x");
		scanf("%d",&x);
		if(max<x)
		max=x;

	}
	printf("\n max=%d",max);
	getch();

}