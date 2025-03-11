#include <stdio.h>

int main() {
    int N, T;
    scanf("%d", &N);
    int arr[N];
    scanf("%d", &T);
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int found = -1;  
    for(int i = 0; i < N; i++) {
        if(arr[i] == T) {
            found = i; 
            break;  
        }
    }
    if(found !=-1) {
    
        printf("%d", found + 1);
    } else {
        
        printf("-1");
    }

    return 0;
}