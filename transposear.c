#include<stdio.h>
int main()
{
		int a[2][2],b[2][2],i,j;
	printf("enter first matrix elemaent\n");
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
			b[j][i]=a[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
