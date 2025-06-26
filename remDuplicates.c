#include <stdio.h>

int removeDuplicates(int *ar, int n)
{
    if (n == 0) 
    return 0;

    int res = 1; 
    for (int i = 1; i < n; i++) 
    {
        if (ar[i] != ar[res - 1]) 
        {
            ar[res] = ar[i];
            res++;
        }
    }

    return res;  
}

int main()
{
    int ar[] = {10, 10, 10, 10, 20, 30, 40};
    int n = sizeof(ar) / sizeof(ar[0]);

    int newLength = removeDuplicates(ar, n);
    for (int i = 0; i < newLength; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}

     

