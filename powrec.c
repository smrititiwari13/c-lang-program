#include<stdio.h>
int power(int,int);
int main()
{
	int base,a,res;
	printf("enter number");	
	scanf("%d",&base);
	printf("enter power no");
	scanf("%d",&a);
	res=pow(base,a);
	printf("%d",res);
	return 0;
}
int power(int base,int a)
{
	if(a!=0)
		return (base*power(base,a-1));
	else
		return 1;
}

