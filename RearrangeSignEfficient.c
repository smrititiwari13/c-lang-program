
#include <stdio.h>
int RearrangeSign(int arr[],int n)
{
    int res[100];
    int j=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            res[j]=arr[i];
            j+=2;

        }
        else
        {
        res[k+1]=arr[i];
        k+=2;

        }
    }

  for(int i=0;i<n;i++)
  {
      printf("%d ",res[i]);
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
   RearrangeSign(arr,n);
    return 0;
}
