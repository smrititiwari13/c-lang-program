#include<stdio.h>
int MaxConsecutive(int arr[],int n)
{
    int count=1,max=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]==arr[i])
        {
            count++;
        }
        else if(max<count)
        {
        max=count;
        count=1;
        }
    }
    return max;
    
}
int main()
{
    int arr[100],n=8;
    printf("enter array elements\n");
    for(int i=0;i<8;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    printf("%d",MaxConsecutive(arr,n));
    return 0; 
}
