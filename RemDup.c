#include <stdio.h>

int removeDup(int arr[], int n) {
    if (n == 0)
    return 0;
  
    int j = 0;
    for (int i = 1; i < n - 1; i++) {

          
        if (arr[i] != arr[j])
            arr[++j] = arr[i];
    }
  
    return j + 1;
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]);
  
   
    n = removeDup(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
