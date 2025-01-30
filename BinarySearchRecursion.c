#include<stdio.h>
int BinarySearch(int a[],int low,int high, int x)
{
      int mid=(low+high)/2;
      if(low>high)
      return -1;
      else if(a[mid]==x)
      return mid;
      else if(a[mid]<x)
      return BinarySearch(a,mid+1,high,x);
      else
      return BinarySearch(a,low,mid-1,x);

}
int main()
{
    int x;
    int a[]={10,20,30,40,50,60};
    int n=sizeof(a)/sizeof(a[0]);
    printf("enter element to search");
    scanf("%d",&x);
    int result=BinarySearch(a,0,n-1,x);
    if(result==-1)
    printf("element not found");
    else
    printf("element found at index %d",result);
    
    return 0;
}
