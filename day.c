#include<stdio.h>
int main()
{
	int day,month,year,f,k,j;
	printf("enter date,month and year");
	scanf("%d\n%d\n%d",&day,&month,&year);
	if(month==1||month==2)
	{
		month+=2;
		year-=1;
	}
	else
	{
		month=month;
		year=year;
	}
	k=year%100;
	j=year/100;
	f=(day+13*(month+1)+k+k/4+j/4+5*j)%7;
	switch (f)
	{
		case 0:
			printf("saturday");
			break;
		case 1:
			printf("sunday");
			break;
		case 2:
			printf("monday");
			break;
		case 3:
			printf("tuesday");
			break;
		case 4:
			printf("wed");
			break;
		case 5:
			printf("thurs");
			break;
		case 6:
			printf("friday");
			break;
		default:
		printf("wrong");
	}
}
