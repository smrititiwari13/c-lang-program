#include<stdio.h>
#include<math.h>
int maxSum(int a[],int n,int k)
{
    int curr=0;
    for(int i=0;i<k;i++)
    {
        curr+=a[i];
    }
    int res=curr;
    for(int i=k;i<n;i++)
    {
        curr=curr+a[i]-a[i-k];
        res=fmax(res,curr);
    }
    return res;
    
}
int main()
{
    int n,k=3;
    scanf("%d",&n);
    int a[n];
    printf("enter array");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
   printf("%d",maxSum(a,n,k));
    
       
    return 0;
}
