
#include <stdio.h>
void  peakEleArr(int a[],int n)
{ 
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1]&&a[i]>a[i-1])
        {
           printf("peak element=%d\n",i);
        }
       
    }

}
 

int main()
{
    int n;
    printf("enter");
    scanf("%d",&n);
    int arr[n];
    printf("enter");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    peakEleArr(arr,n);
    return 0;
}

