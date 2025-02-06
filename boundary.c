#include<stdio.h>
int boundary(int a[4][4])
{
     for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i==0||j==0||i==3||j==3)
            {
                printf("%d ",a[i][j]);
            }
            else
            printf("  ");
            
            
        }
        printf("\n");
    }
    
}
int main()
{
    int a[4][4];
    printf("enter");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    boundary(a);
}
