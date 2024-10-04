#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter three sides");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c)
		printf("triangle is equilateral");

	else if(a==b||b==c||c==a)
		printf("triangle is isoceles");
	else
		printf("triangle is scalene");
	

	getch();
	return 0;
}
