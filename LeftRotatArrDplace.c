#include <stdio.h>
int reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
int LeftRotate(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    
}

int main()
{
    int arr[7]={5,9,3,11,15,13,19};
    int d=3;
    int n=7;
    LeftRotate(arr,n,d);
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
return 0;
}
