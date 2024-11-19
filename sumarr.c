#include<stdio.h>
void main()
{
	int a[2][2],i,j,sum=0;
	printf("enter elements");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum+=a[i][j];
		}
	}
	printf("%d",sum);
}
