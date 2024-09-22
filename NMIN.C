#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,x,min=9999;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter x");
		scanf("%d",&x);
		if(min>x)
		min=x;
	}
	printf("min=%d",min);
	getch();

}