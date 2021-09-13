//Bibliotecas padrão
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

// Bibliotecas personalizadas
#include "montanha.h"


int main(int argc, char* argv[]){
    // Cria o tamanho horizontal da montanha 
    int n = 3;
    int range = pow(2, n) + 1;
    int montanha[range];

    criaMontanha(montanha, range);

    // Mostra como ficou os valores de tamanho da montanha toda na tela
    for (size_t i = 0; i < range; i++){
        printf("%d ", montanha[i]);
    }
}

void usage(){

}