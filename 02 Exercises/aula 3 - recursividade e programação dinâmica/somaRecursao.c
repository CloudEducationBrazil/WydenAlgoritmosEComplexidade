#include <stdio.h>

int soma(int n) {
    if (n == 1) // caso base
        return 1;
    return n + soma(n - 1); // passo recursivo
}

int main() {
    int n = 5;
    printf("Soma de 1 até %d = %d\n", n, soma(n));
    return 0;
}