#include<stdio.h>
#include<conio.h>
int main()
{
	int var,temp=0;
	printf("enter any number to reverse it");
	scanf("%d",&var);
	while(var!=0)
	{
	temp=temp*10+var%10;
	var=var/10;
	}
	printf("%d",temp);
}
