#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,d;
	clrscr();
	printf("enter two values\n");
	scanf("%d%d",&a,&b);
	printf("enter choice\n");
	scanf("%d",&d);
	switch (d)
	{
		case 1:

		printf("sum=%d\n",a+b);
		break;
		case 2:

		printf("sub=%d\n",a-b);
		break;

		case 3:

		printf("multiply=%d\n",a*b);
		break;

		case 4:

		printf("devide=%d\n",a/b);
		break;

		default:
		printf("wrong choice");

	}
	getch();
}
