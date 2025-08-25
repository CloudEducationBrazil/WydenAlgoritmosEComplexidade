#include <stdio.h>
int memo[1000];
    
int fib(int n) {
    if (n <= 1) return n;
    if (memo[n] != 0) return memo[n];
    memo[n] = fib(n-1) + fib(n-2);
    return memo[n];
}

int main() {
    printf("%d ", fib(11));
    printf("%d ", memo[0]);
    printf("%d ", memo[1]);
    printf("%d ", memo[2]);
    printf("%d ", memo[3]);
    printf("%d ", memo[4]);
    printf("%d ", memo[5]);
    printf("%d ", memo[6]);
    printf("%d ", memo[7]);
    printf("%d ", memo[8]);
    

    return 0;
}
