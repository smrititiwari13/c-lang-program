#include<stdio.h>
void table(int,int);
void main()
{
	int n,i;
	printf("enter no");
	scanf("%d",&n);
	table(n,1);
	
}
void table(int n,int i)
{
	printf("%d x %d = %d\n",n,i,n*i);
	if(i<10)
		return table(n,i+1);
}
