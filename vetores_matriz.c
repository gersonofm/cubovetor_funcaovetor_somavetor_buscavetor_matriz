#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void vetoraocubo() {

    // variaveis
    int vetor[10];
    int i;
    int cubo[10];

    // repeticao para ler valores do usuario
    for(i = 0; i < 10; i++) {
        printf("Digite o valor da posicao %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // repeticao para realizar a multiplicacao
    for(i = 0; i < 10; i++){
        cubo[i] = vetor[i] * vetor[i] * vetor[i];
    }

    // impressao vetor
    printf("\nVetor: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    // impressao do resultado dos valores do vetor ao cubo
    printf("\n\nResultado dos valores do vetor ao cubo: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", cubo[i]);
    }
}

void calculofuncao() {

// variaveis
    int vetorx[10];
    int i;

    // repeticao para ler valores do usuario
    for(i = 0; i < 10; i++) {
        printf("Digite o valor para o vetor x %d: ", i+1);
        scanf("%d", &vetorx[i]);
    }

    for(i = 0; i < 10; i++) {
        int funcaoy1 = 2 * (vetorx[i]) + 1;
        int funcaoy2 = pow(vetorx[i],2);
        int funcaoy3 = pow(vetorx[i],3);

        printf("\nO valor de Y na funcao 'Y = 2X + 1' se o X equivaler a: %d, o resultado sera: %d\n", vetorx[i], funcaoy1);
        printf("O valor de Y na funcao 'Y = X^2' se o X equivaler a: %d, o resultado sera: %d\n", vetorx[i], funcaoy2);
        printf("O valor de Y na funcao 'Y = X^3' se o X equivaler a: %d, o resultado sera: %d\n\n", vetorx[i], funcaoy3);
    }
}

void somavetor() {

    // variaveis
    float vetor[10];
    int i;
    float soma = 0;

    // repeticao para ler valores do usuario
    for(i = 0; i < 10; i++) {
        printf("Digite o valor da posicao %d: ", i+1);
        scanf("%f", &vetor[i]);
    
    // calculo
        soma = soma + vetor[i];
    }

    // impressao do resultado
    printf("\nA soma dos valores do vetor e: %.1f\n", soma);
}

void buscavetor() {

    int vetor[20];
    int i;
    int busca;

    for(i = 0; i < 20; i++) {
        printf("Digite o valor da posicao %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nQual o numero deseja encontrar ? \n", busca);
    scanf("%d", &busca);

    for(i = 0; i < 20; i++) {
        if(busca == vetor[i]) {
            printf("O numero %d foi encontrado na posicao %d", busca, i+1);
        }
    }
}

void matriz() {

    // variaveis
    float matriz[2][2];
    int i;
    int j;
    float determinante;

    // repeticao para ler os valores do usuario
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++){
            printf("Matriz M [%d] [%d] = ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
    
    // calculo determinante
    determinante = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
        }
    }

    // imprime o resultado do determinante
    printf("\nDeterminante da matriz: %.1f\n", determinante);
}

int menu() {

    int opcao = 0;
    printf("Digite a opcao:\n\n  1 - Vetor ao cubo\n  2 - Calculo funcao\n  3 - Soma valores do vetor\n  4 - Busca no vetor\n  5 - Matriz\n  0 - Sair\n\n");
    printf("Opcao ==> ");
    scanf("%d", &opcao);
    return opcao;
}

int main() {

    switch (menu()) {

        case 0:
            printf("\nSaindo ...\n");
            break;

        case 1:
            vetoraocubo();
            break;

        case 2:
            calculofuncao();
            break;

        case 3:
            somavetor();
            break;

        case 4:
            buscavetor();
            break;

        case 5:
            matriz();
            break;
    }
}