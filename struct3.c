#include<stdio.h>
struct stu
{
	int roll;
	char *name;
	
};

int main()
{
	
	struct stu s1; //object of student structure
	s1.roll=68;
	
	s1.name="arunima";
    
	printf("%d %s",s1.roll,s1.name);
	printf("modified details");
	s1.roll=60;
	
	s1.name="arunimaqwertyui";
    
	printf("%d %s",s1.roll,s1.name);
	
	return 0;
}
