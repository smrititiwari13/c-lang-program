#include<stdio.h>
#include<string.h>
int str(char a[],int i,int j)
{
    if(i>=j)
    return 0;
    char temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    str(a,i+1,j-1);
}
int isPalin(char a[])
{
    int left=0;
    int right=strlen(a)-1;
    while(left<right)
    {
        if(a[left]!=a[right])
        {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main()
{
    char a[]="madam";
    int length=strlen(a);
    str(a,0,length-1);
    printf("%s\n",a);
    if(isPalin(a))
    {
        printf("yes");
    }
    else
    printf("no");
    

    
   return 0;

    
    
}
