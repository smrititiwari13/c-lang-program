
#include <stdio.h>

int ROTATE(int arr[3][3],int a,int b)
{
    int brr[10][10];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            brr[i][j]=arr[j][i];
            
        }
     
    }
    
   
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(i==0||i==1||i==2)
            {
                int temp=brr[i][j];
                brr[i][j]=brr[i][j+(b-1)];
                brr[i][j+(b-1)]=temp;
              i++;
              j--;
            }
            
        }
       
    }      
  
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
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
    ROTATE(arr,3,3);
 
    return 0;
}
