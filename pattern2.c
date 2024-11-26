#include<stdio.h>
int main()
{
	int i,j;
	int n,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			printf(" ");
		}
		count=i;
		for(j=0;j<i;j++)
		{
			printf("%d",count);
			count++;
		}
		count -=2;
		for(j=1;j<i;j++)
		{
			printf("%d",count);
			count--;
		}
		printf("\n");
	}
	return 0;
}
