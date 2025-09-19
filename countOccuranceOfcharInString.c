
#include <stdio.h>

int main() 
{
    char str[100];
    scanf("%[^\n]s",str);
    int i,j,k=0;
    int count=0;
    char s1[100];
    for(i=0;str[i]!='\0';i++)
    {
        count =0;
        for(j=0;j<=i;j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            s1[k]=str[i];
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        count=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(s1[i]==str[j])
            count++;
        }
        if(count==1)
        printf("%c",s1[i]);
        else
        printf("%c%d",s1[i],count);
    }
   
       return 0;
}
