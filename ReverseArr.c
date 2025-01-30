#include<stdio.h>
int main()
{
  int a[10]={8,3,0,6,7,2,9,4,5,1};
  int n=sizeof(a)/sizeof(a[0]);
  int first=0,last=n-1;
for(int i=0;i<n/2;i++)
{
    int temp=a[first];
    a[first]=a[last];
    a[last]=temp;
    first++;
    last--;
  }
  for(int i=0;i<n;i++)
  {
      printf("%d ",a[i]);
  }
  
   
      return 0;
}
