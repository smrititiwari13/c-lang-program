#include<stdio.h>
int main()
{
	int i,n;
	int sum=0;
	printf("enter value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
//		if(i%2!=0)
//		{
//			printf("%d",i);
//			sum=sum+i;
//			printf("%d",sum);
//		}
//		else
//		printf("\n");

//	return 0;
//}
