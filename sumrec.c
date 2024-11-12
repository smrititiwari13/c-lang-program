#include<stdio.h>
int sum(int);
int main()
{
	int n;
	printf("enetr positive integer");
	scanf("%d",&n);
	printf("%d",sum(n));
	return 0;
}
int sum(int n)
{
	if(n!=0)
	return n+sum(n-1);
	else
	return n;
	
		
}
