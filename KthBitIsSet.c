
#include <stdio.h>

int main()
{
    int n,k;
   
    scanf("%d",&n);
    scanf("%d",&k);
   int a= 1&(n>>k);
    if(a==1)
    printf("bit is set");
    else
    printf("bit is clear");

    return 0;
}
