int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not prime
        }
    }
    return 1;  // Prime
}

int main() {
    int t;  // Number of test cases
    scanf("%d", &t);

    while (t--) {
        int num;
        scanf("%d", &num);
        
        if (isPrime(num)) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
}