#include <stdio.h>
#include <string.h>

void inverter(char s[], int i) {
    if (i < 0) return;        // caso base
    printf("%c", s[i]);       // imprime o caractere atual
    inverter(s, i - 1);       // chamada recursiva
}

int main() {
    char palavra[] = "recursao";
    printf("Original: %s\n", palavra);
    printf("Invertida: ");
    inverter(palavra, strlen(palavra) - 1);
    printf("\n");
    return 0;
}