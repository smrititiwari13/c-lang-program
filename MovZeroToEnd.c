#include <stdio.h>
int MovZeroToEnd(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
         int temp=arr[i];
        arr[i]=arr[count];
        arr[count]=temp; 
        count++;
        }
    }
}



int main()
{
    int arr[10]={0,9,0,11,0,13,9,7};
    //int d=3;
    int n=8;
   MovZeroToEnd(arr,n);
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
return 0;
}
