
#include <stdio.h>
int Transpose(int arr[3][3],int a,int b)
{
    int brr[10][10];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            brr[i][j]=arr[j][i];
            printf("%d ",brr[i][j]);
        }
      printf("\n");
    }
    
}

int main()
{
    int arr[3][3];
    printf("enter the matrix");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    Transpose(arr,3,3);
 
    return 0;
}
