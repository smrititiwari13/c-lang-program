#include<stdio.h>
int main()
{
	int i,a[10],x;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("search an element");
	scanf("%d",&x);
	for(i=0;i<10;i++)
	{
	 if(a[i]==x)
	 {
	 	printf("element found at loction %d",i);
	 	break;
	 }
		 
	 	
	}
	return 0;
}
