
#include <stdio.h>
void multiplyMat(int a[], int b[],int n,int m)
{ 

    b[0] = a[0]; 

    for(int i = 1; i < n; i++){ 

        b[i] = b[i-1] * a[i]; 

    } 
    int prod = 1; 

    for(int i = n-1; i > 0; i--){ 

        b[i] = b[i-1] * prod; 

        prod *= a[i]; 

    } 

    b[0] = prod;
   for(int i=0;i<n;i++)
   printf("%d ",b[i]);
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
    int m=100;
    int arr2[m];
    multiplyMat(arr,arr2,n,m);
    return 0;
}
