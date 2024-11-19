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
	for(i=0;i<1;i++)
	{
		for(j=0;j<2;j++)
		{
			sum+=a[i][j];
		}
	}
	printf("first row addition=%d\n",sum);
	printf("\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<1;j++)
		{
			sum+=a[i][j];
		}
	}
	printf("second row addition=%d",sum);

}
