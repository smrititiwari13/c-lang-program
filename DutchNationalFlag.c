#include<stdio.h>
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int sort(int arr[],int n)
{
int low=0;
int high=n-1;
int mid=0;
 while(mid<=high)
 {
     if(arr[mid]==0)
     {
         swap(&arr[low++],&arr[mid++]);
     }
     else if(arr[mid]==1)
     {
         mid++;
     }
     else
     swap(&arr[mid],&arr[high--]);
 }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d,",&arr[i]);
    sort(arr,n);
    for(int i=0;i<n;i++)
    printf("%d",arr[i]);

    return 0;
}
