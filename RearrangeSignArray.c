
#include <stdio.h>
int RearrangeSign(int arr[],int n)
{
    int res[100];
    int j=0,k=0;
    int pos[n/2],neg[n/2];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            pos[j++]=arr[i];
        }
        else
        neg[k++]=arr[i];
    }
    j=0;
    k=0;
        for(int i=0;i<n;i++)
        {
            res[2*i]=pos[j++];
            res[2*i+1]=neg[k++];
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
