#include<stdio.h>
int sort(int arr[],int n)
{
 int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count0++;
        }
        else if(arr[i]==1)
        count1++;
        else
        count2++;
    }
    for(int i=0;i<count0;i++)
    printf("0");
    for(int i=0;i<count1;i++)
    printf("1");
    for(int i=0;i<count2;i++)
    printf("2");
    
}
int main()
{
    //int count0=0,count1=0;count2=0
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d,",&arr[i]);
    sort(arr,n);
    //for(int i=0;i<n;i++)
    //printf("%d",arr[i]);
    return 0;
}
