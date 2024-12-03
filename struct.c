#include<stdio.h>
struct student
{
	int roll;
	char name[50];
	float totalmarks;
	
}s;
int main()
{

scanf("%d %s %f",&s.roll,&s.name,&s.totalmarks);
printf("details are\n:");
printf("%d %s %0.2f",s.roll,s.name,s.totalmarks);
return 0;
}

