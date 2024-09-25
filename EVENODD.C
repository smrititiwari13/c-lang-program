#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("enter any number\n");
	scanf("%d",&a);
	if(a%2==0)
		printf("number is even");

	else
		printf("number is odd");

	getch();

}