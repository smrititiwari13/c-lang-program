#include <stdio.h>
int frequency(int arr[],int n)
{
    int freq=1,i=1;
    while(i<n)
    {
        while(i<n&&arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        printf("arr[%d]=%d\n",arr[i-1],freq);
        i++;
        freq=1;
    }
  if(n==1||arr[n-1]!=arr[n-2])
  printf("arr[%d]=%d",arr[n-1],1);
}



int main()
{
    int arr[10]={10,10,10,30,30,40,40,40,40};
    int n=9;
   frequency(arr,n);
    
    
return 0;
}
