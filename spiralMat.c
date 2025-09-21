
#include <stdio.h>
void print(int r,int c,int a[r][c])
{
    int top=0,left=0,bottom=r-1,right=c-1;
    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++)
        printf("%d ",a[top][i]);
        top++;
        for(int i=top;i<=bottom;i++)
        printf("%d ",a[i][right]);
        right--;
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            printf("%d ",a[bottom][i]);
            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            printf("%d ",a[i][left]);
            left++;
        }
    }
}
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    print(r,c,a);

    return 0;
}
