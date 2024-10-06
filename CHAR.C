#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	printf("enter something\n");
	scanf("%c",&c);
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		printf("alphabet");
	else
		printf("not alphabet");
	getch();
}
