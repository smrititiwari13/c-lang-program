#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
	int a=5,b=6;
	swap(a,b);
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("%d%d",a,b);
}
