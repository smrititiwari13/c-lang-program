#include<stdio.h>

int majority(int arr[],int n)
{
    

   for(int i=0;i<n;i++)
   {
    int count=1;
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
            count++;
        }
        
    }
    if(count>n/2)
        return arr[i];
    
   }
   return -1;
   
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
    if(majority(arr,n)==-1)
    printf("not found");
    else
    printf("majority=%d",majority(arr,n));
    
    return 0;
}
