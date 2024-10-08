#include<stdio.h>
#include<conio.h>
int main()
{
		int t=9;
		int n,s,i;
		printf("enter value of n\n");
		scanf("%d",&n);
		s=t;
		printf("%d",s);
		for(i=1;i<n;i++)
		{
			s=s*10+t;
			printf("+");
			printf("%d",s);
		
		}
}
