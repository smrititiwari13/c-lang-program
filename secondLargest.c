#include<stdio.h>
int main()
{
  int arr[10]={8,3,0,6,7,2,9,4,5,1} ,lar=0,sec=-1;
for(int i=1;i<10;i++)
{
    if(arr[i]>arr[lar])
    {
        sec=lar;
        lar=i;

    }
    else if (arr[i] != arr[lar] && (sec == -1 || arr[i] > arr[sec]))
    {
        sec=i;
    }
}
printf("%d",arr[sec]);
      return 0;
}
