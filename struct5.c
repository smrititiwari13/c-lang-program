
#include <stdio.h>

struct stu
{
	int roll;
	char *name[100];
	
};
int main()
{
	int i;
	struct stu s[5];
	for(i=0;i<5;i++)
	{
		scanf("%d  %s",&s[i].roll,s[i].name);
	}
	for(i=0;i<5;i++)
	{
		printf("%d  %s\n",s[i].roll,s[i].name);
	}
	return 0;
}
