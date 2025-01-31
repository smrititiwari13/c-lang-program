#include<stdio.h>
#include<limits.h>

int MaxSubArrSum(int arr[],int n)
{
    int max=INT_MIN;
    int curr_sum=0;
    
   for(int i=0;i<n;i++)
   {
       curr_sum +=arr[i];
       if(curr_sum>max)
       max=curr_sum;
       if(curr_sum<0)
       curr_sum=0;
    
    }
   
   return max;
   
}

     void input(int arr[],int n)
     {
     for(int i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     }



int main(){
    int n;
    printf("enter no. of element");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in ");
    input(arr,n);
    printf("maxsum=%d",MaxSubArrSum(arr,n));
    
    return 0;
}
