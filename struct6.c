#include<stdio.h>
struct student
{
	char *brand[4];
	char *mod[4];
	int year[4];
	int price[4];
};
int main()
{
	int i;
	struct student s;

	s.brand[0] = "Apple";
    s.brand[1] = "Samsung";
    s.brand[2] = "Google";
    s.brand[3] = "OnePlus";
	
	s.mod[0] = "iPhone 15";
    s.mod[1] = "Galaxy S24";
    s.mod[2] = "Pixel 9";
    s.mod[3] = "OnePlus 12";
    
    s.year[0] = 2023;
    s.year[1] = 2023;
    s.year[2] = 2024;
    s.year[3] = 2024;

    s.price[0] = 999;
    s.price[1] = 849;
    s.price[2] = 899;
    s.price[3] = 799;
    
    for(i=0;i<4;i++)
    {
	  printf("Brand: %s, Model: %s, Year: %d, Price: %d\n",s.brand[i], s.mod[i], s.year[i], s.price[i]);
    }
    int y;
    scanf("%d",&y);
     for(i=0;i<4;i++)
    {
    if(y>s.year[i])
	  printf("Brand: %s, Model: %s, Year: %d, Price: %d\n",s.brand[i], s.mod[i], s.year[i], s.price[i]);
	  
    }
    
    
	return 0;
}
