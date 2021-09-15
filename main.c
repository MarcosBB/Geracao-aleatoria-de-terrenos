//Bibliotecas padrão
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

// Bibliotecas personalizadas
#include "montanha.h"
#include "settings.h"
#include "imagem.h"

void usage(){
    printf("\nPara digitar parametros de configuracao digite 'main.exe' e em seguida:\n\n");
    printf("    -d <num> - Define o deslocamento aleatorio maximo a ser usado na geracao.\n");
    //printf("    -o <arq> - Define o nome do arquivo de imagem a ser gerado.\n\n");
    printf("Exemplo: main.exe -d 5\n\n");
}

int main(int argc, char* argv[]){
    // Parametros de configuração
    int sensibilidade;
    bool sensibilidadeInformada = false;
    bool fileNameInformado = false;

    for(int i=0; i<argc; i++){
        if(strcmp(argv[i], "-d") == 0){
            sscanf(argv[i+1], "%d",  &sensibilidade);
            sensibilidadeInformada = true;
        }
        
    }

    if (sensibilidadeInformada == false)
        sensibilidade = 4;

    if (sensibilidade < 0){
        usage();
        exit(-1);
    }

    printf("Sensibilidade = %d\nTamanho maximo = %d\nRange = %d\n\n" , sensibilidade , tamanhoMaximo, range());
    // Cria montanha
    int montanha[range()];
    criaMontanha(montanha, sensibilidade);

    // Mostra como ficou os valores de tamanho da montanha toda na tela
    for (size_t i = 0; i < range(); i++){
        printf("%d ", montanha[i]);
    }
    
    criaimagem(montanha);
}