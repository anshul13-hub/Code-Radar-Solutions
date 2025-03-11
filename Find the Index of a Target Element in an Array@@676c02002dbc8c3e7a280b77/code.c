#include <stdio.h>

int main() {
    int N, T;
    scanf("%d", &N);
    int arr[N];
    scanf("%d", &T);
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    // int found = -1;  
    for(int i = 0; i < N; i++) {
        if(arr[i] == T) {
           int found = i; 
           printf(i);
          //  break;  
        }
        else{
            printf("-1");
        }
    }
    // if(found !=-1) {
    
    //     printf("%d", found);
    // } else {
        
    //     printf("-1");
    // }

    return 0;
}