#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

void fatoriais_com_vetores() {
    int n;

    printf("Digite um numero inteiro de 1 a 20: ");
    scanf("%d", &n);

    long long fatoriais[n];

    printf("Fatoriais:\n");
    for (int i = 0; i < n; i++) {
        fatoriais[i] = fatorial(i + 1);
        printf("%d! = %lld\n", i + 1, fatoriais[i]);
    }
}

void Fatoriais() {
    fatoriais_com_vetores();
}

