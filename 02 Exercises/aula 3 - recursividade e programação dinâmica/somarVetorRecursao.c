#include <stdio.h>

int soma(int vetor[], int n) {
    if (n == 0) return 0; // caso base
    return vetor[n-1] + soma(vetor, n-1);
}

int main() {
    int numeros[] = {2, 4, 6, 8, 10};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("Soma dos elementos = %d\n", soma(numeros, tamanho));
    return 0;
}