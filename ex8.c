#include <stdio.h>
#include <stdbool.h>

int interseccao(int A[], int tamanho_A, int B[], int tamanho_B) {
    bool conjunto_A[1000] = {false}; 

    for (int i = 0; i < tamanho_A; i++) {
        conjunto_A[A[i]] = true;
    }

    bool intersecao = false;

    printf("A interseccao entre os vetores A e B eh: {");
    for (int i = 0; i < tamanho_B; i++) {
        if (conjunto_A[B[i]]) {
            if (intersecao) {
                printf(", ");
            }
            printf("%d", B[i]);
            intersecao = true;
        }
    }
    printf("}\n");
}

int main(){
    int tam_a;
    printf("\nentre o numero de elementos a ser analizados para o valor A: ");
    scanf("%d", &tam_a);
    int vetor_A[tam_a];
    for (int i = 0; i < tam_a; i++) {
        printf("Valor para a posicao %d: ", i);
        if (scanf("%d", &vetor_A[i]));
    }
    int tam_b;
    printf("\nentre o numero de elementos a ser analizados para o valor B: ");
    scanf("%d", &tam_b);
    int vetor_B[tam_b];
    for (int i = 0; i < tam_b; i++) {
        printf("Valor para a posicao %d: ", i);
        if (scanf("%d", &vetor_B[i]));
    }
    printf(interseccao(vetor_A,tam_a,vetor_B,tam_b));
    return 0;
