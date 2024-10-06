#include<stdio.h>
#include<conio.h>
void main()
{
	char gr;
	char A,B,C,D,E;
	printf("enter grade\n");
	scanf("%c",&gr);
	switch (gr)
	{
		case 'A':
		printf("exellent");
		break;
		case 'B':
		printf("very good");
		break;
		case 'C':
		printf("average");
		break;
		case 'D':
		printf("fair");
		break;
		case 'E':
		printf("fail");
		break;
		default:
		printf("please enter in upper case");
	}
getch();
}