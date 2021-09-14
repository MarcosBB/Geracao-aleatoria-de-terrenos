//Bibliotecas padrão
#include <time.h>
#include <stdbool.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int mudaTamanho(int sensibilidade){ // Decide se a mudança vai ser incremento ou decremento e retorna um número aleatório.
    int mudanca = rand() % 2;

    if(mudanca == 0)
        return (rand() % sensibilidade);

    else
        return (rand() % sensibilidade) * (-1);
}

void preencheMontanha(int *vetor, int range, int sensibilidade){ // Preenche os espaços em branco do array da montanha
    int indice1;
    int indice2;
    int indiceMedio;

    bool achou_o_primeiro;
    bool terminou = false;

    while(true){
        achou_o_primeiro = false;
        terminou = true;
        for (size_t i = 0; i < range; i++){
            if (vetor[i]<0 && !achou_o_primeiro){
                indice1 = i-1;
                achou_o_primeiro = true;
                terminou = false;
            }
            if (vetor[i]>=0 && achou_o_primeiro){
                indice2 = i;
                break;
            }
        }
        
        indiceMedio = (indice1 + indice2)/2;
        vetor[indiceMedio] = ((vetor[indice1] + vetor[indice2])/2) + mudaTamanho(sensibilidade);

        //printf("Indice1 = %d ; Indice2 = %d ; IndiceMedio = %d\n", indice1, indice2, indiceMedio);

        if (terminou)
            break;
    }
}

void criaMontanha(int *vetor, int range, int sensibilidade){ //
    srand(time(NULL));

    // Inicializa array da montanha
    for (size_t i = 0; i < range; i++){
        vetor[i] = -1;
    }

    // Cria tamanho das extremidades da montanha
    int extremidade = rand() % 21;
    vetor[0] = extremidade;
    vetor[range-1] = extremidade;

    // Preenche a montanha com tamanhos
    preencheMontanha(vetor, range, sensibilidade);

}