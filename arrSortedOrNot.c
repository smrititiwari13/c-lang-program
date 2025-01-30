#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],i,j,n;
    printf("enter size");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i+1]<a[i]||a[i]<a[i+1])
        {
         goto p;
         break;
        }
        else
        {
        goto q;
        break;
        }
 
    }
    p: printf("array is sorted");
    exit(0);
    q: printf("array is not sorted");
    return 0;
}
