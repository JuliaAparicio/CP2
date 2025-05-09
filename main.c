//  Ex 1 Giovana 565681; Ex 2 Julia 563623; Ex 3 Maria Eduarda 565383; Ex 4 Nicolle 564381

#include <stdio.h>
#include <string.h>

// Função para gerar a sequência de Fibonacci
void Fibonacci() {
    int n, i;

    printf("Digite a quantidade de termos da sequência de Fibonacci (1 a 50): ");
    scanf("%d", &n);

    if (n < 1 || n > 50) {
        printf("Valor incorreto! Digite um numero entre 1 e 50.\n");
        return;
    }

    int fib[50];
    fib[0] = 0;

    if (n > 1)
        fib[1] = 1;

    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Sequência de Fibonacci: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
}

// Função para calcular fatorial
int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Função auxiliar para gerar vetor de fatoriais
void fatoriais_com_vetores() {
    int n;

    printf("Digite um numero inteiro de 1 a 20: ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Valor inválido. Digite um número entre 1 e 20.\n");
        return;
    }

    long long fatoriais[n];

    printf("Fatoriais:\n");
    for (int i = 0; i < n; i++) {
        fatoriais[i] = fatorial(i + 1);
        printf("%d! = %lld\n", i + 1, fatoriais[i]);
    }
}

// Função chamada pelo menu
void Fatoriais() {
    fatoriais_com_vetores();
}

// Função para verificar se uma palavra é palíndromo
void verificar_palindromo() {
    char palavra[101];
    int tam, palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);
    for (int i = 0; i < tam / 2; i++) {
        if (palavra[i] != palavra[tam - 1 - i]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo)
        printf("A palavra é um palíndromo.\n");
    else
        printf("A palavra NÃO é um palíndromo.\n");
}

// Função para verificar substring
void verificar_substring() {
    char str1[101], str2[101];

    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (strstr(str1, str2) != NULL)
        printf("A segunda string está contida na primeira.\n");
    else
        printf("A segunda string NÃO está contida na primeira.\n");
}

// Menu principal
int main() {
    int opcao;

    do {
        printf("\n===== MENU DE EXERCÍCIOS =====\n");
        printf("1 - Sequência de Fibonacci\n");
        printf("2 - Fatoriais\n");
        printf("3 - Verificar Palíndromo\n");
        printf("4 - Verificar Substring\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                Fibonacci();
                break;
            case 2:
                Fatoriais();
                break;
            case 3:
                verificar_palindromo();
                break;
            case 4:
                verificar_substring();
                break;
            case 0:
                printf("Finalizando o programa.\n");
                break;
            default:
                printf("Opção incorreta, tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
