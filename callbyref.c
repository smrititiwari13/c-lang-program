#include<stdio.h>
#include<conio.h>
int add(int *,int *);
void main()
{
	int a=5,b=6;
	int c=add(&a,&b);
	printf("%d",c);
}
int add(int *a,int *b)
{
	*a=*a+*b;
	return *a;	
}
