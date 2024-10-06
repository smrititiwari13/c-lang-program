#include<stdio.h>
void main()
{
	char ch;
	char a,e,i,o,u,A,E,I,O,U;
	printf("enter character\n");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='o'||ch=='U')
		printf("vowel");
	else
		printf("consonent");
	getch();
}