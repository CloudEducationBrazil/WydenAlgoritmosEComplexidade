#include <stdio.h>
int memo[1000];
    
int fib(int n) {
    if (n <= 1) return n;
    if (memo[n] != 0 ) return memo[n];
    memo[n] = fib(n-1) + fib(n-2);
    return memo[n];
}

int main() {
    int n = 11;
    printf("%d ", fib(n));
    memo[1] = 1;
    for(int i = 0; i <= n; i++){
        printf("%d ", memo[i]);
    } 
    return 0;
}
