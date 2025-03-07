#include <stdio.h>
int isPrime(int num) {
    if(num <= 1){
        isPrime = 0;

    }
    else
    {
    for(int i = 2;i * i<=num; i++){
        if(num % i == 0 ){
            isPrime = 0;
            break;
        }
    }
}
}
int main () {
    int t;
    scanf("%d", &t);
    while(t--){
        int num ;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));


    }
    return 0;
}