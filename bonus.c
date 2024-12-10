#include<stdio.h>
int bonus(int salary)
{
	int s=0;
	s=(salary*10)/100;
	salary+=s;
	//printf("%d\n%d\n%d\n%s",year,id,salary,name);
	return salary;
	//printf("%d",salary);
}
int main()
{
	int year,id,salary,c;
	char *name[10];
	int e;
	for(e=1;e<=10;e++)
	{
		scanf("%d\n%d\n%d\n%s",&year,&id,&salary,name);
		if(year>=5)
		{
			
			c=bonus(salary);
			printf("%d\n%d\n%s\n%d",year,id,name,c);
			//continue;
		//	goto p;
			
		}
		else
		printf("%d\n%d\n%d\n%s",year,id,salary,name);
		
		
		
	}
	return 0;
}
