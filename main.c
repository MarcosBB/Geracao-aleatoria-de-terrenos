#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

const int sensibilidade = 5 + 1;

int mudaTamanho(){ // Decide se a mudança vai ser incremento ou decremento e retorna um número aleatório.
    int mudanca = rand() % 2;

    if(mudanca == 0)
        return (rand() % sensibilidade);

    else
        return (rand() % sensibilidade) * (-1);
}

int main(int argc, char* argv[]){
    srand(time(NULL));

    // Cria o tamanho horizontal da montanha 
    int n = 3;
    int range = pow(2, n) + 1;
    int montanha[range];

    // Inicializa array da montanha
    for (size_t i = 0; i < range; i++){
        montanha[i] = -1;
    }

    // Cria tamanho das extremidades da montanha
    int extremidade = rand() % 21;
    montanha[0] = extremidade;
    montanha[range-1] = extremidade;

    // Preenche a montanha com tamanhos
    int indice1;
    int indice2;
    int indiceMedio;

    bool achou_o_primeiro;
    bool terminou = false;

    while(true){
        achou_o_primeiro = false;
        terminou = true;
        for (size_t i = 0; i < range; i++)
        {
            if (montanha[i]<0 && !achou_o_primeiro){
                indice1 = i-1;
                achou_o_primeiro = true;
                terminou = false;
            }
            if (montanha[i]>=0 && achou_o_primeiro){
                indice2 = i;
                break;
            }

        }
        
        indiceMedio = (indice1 + indice2)/2;
        montanha[indiceMedio] = ((montanha[indice1] + montanha[indice2])/2) + mudaTamanho();

        //printf("Indice1 = %d ; Indice2 = %d ; IndiceMedio = %d\n", indice1, indice2, indiceMedio);

        if (terminou)
            break;
    }

    // Mostra como ficou os valores de tamanho da montanha toda na tela
    for (size_t i = 0; i < range; i++)
    {
        printf("%d ", montanha[i]);
    }
    
}

void usage(){

}