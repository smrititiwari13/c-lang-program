
#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
   int a= n&(1<<k);
    if(a==1)
    printf("bit is set");
    else
    printf("bit is clear");

    return 0;
}
