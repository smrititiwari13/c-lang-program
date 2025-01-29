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
int main()
{
    char a[]="hello";
    int length=strlen(a);
    str(a,0,length-1);
    
    printf("%s",a);
    
   return 0;

    
    
}
