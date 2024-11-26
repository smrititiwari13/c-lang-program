#include<stdio.h>
#include<limits.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int mn=INT_MAX;
	int mx=INT_MIN;
	for(i=0;i<n;i++)
	{
		if(a[i]>mx)
		{
			mx=a[i];
		}
		if(a[i]<mn)
		{
			mn=a[i];
		}
	}
	printf("max=%d",mx);
	printf("min=%d",mn);
	return 0;
	
}
