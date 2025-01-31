#include <stdio.h>
int currLeader(int arr[],int n)
{
    //int count=0;
    int curr_lead=arr[n-1];
    printf("%d\n",curr_lead);
    for(int i=n-2;i>=0;i--)
    {
        if(curr_lead<arr[i])
        {
         curr_lead=arr[i];
         printf("%d\n",curr_lead);
        }
    }
}



int main()
{
    int arr[10]={6,10,2,3,4,6,5,2};
    //int d=3;
    int n=8;
    currLeader(arr,n);
    
return 0;
}
