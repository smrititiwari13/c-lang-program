
#include <stdio.h>
int productArray(int arr[],int n)
{
    int ans[100];
    for(int i=0;i<n;i++)
    {
        int product=1;
        for(int j=0;j<n;j++)
        {
        if(arr[i]!=arr[j])
        {
        product*=arr[j];
        ans[i]=product;
        }
        
        else
        continue;
        }
    }

  for(int i=0;i<n;i++)
  {
      printf("%d ",ans[i]);
  }
 
}

int main()
{
    int n;
    printf("enter");
    scanf("%d",&n);
    int arr[n];
    printf("enter");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
  productArray(arr,n);
    return 0;
}
