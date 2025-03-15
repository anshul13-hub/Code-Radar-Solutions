#include <stdio.h>

int main() {
    int n;
    
    // Input the size of the array
    scanf("%d", &n);

    int arr[n];
    
    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int max1 = arr[0], max2 = arr[1];

    for (int i = 1; i < n; i++) {
      
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        
        
    int product1 = max1 * max2;  
    printf("%d",product1);
    }
   
    
    return 0;
}