#include <stdio.h>

void imprime(int n) {
    if (n == 0) // caso base
        return;
    printf("%d\n", n); // imprime n
    imprime(n - 1);    // chamada recursiva
}

int main() {
    int n = 5;
    imprime(n); // imprime: 5 4 3 2 1
    return 0;
}