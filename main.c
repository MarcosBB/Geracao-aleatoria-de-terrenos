//Bibliotecas padrão
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Bibliotecas personalizadas
#include "montanha.h"

void usage(){
    printf("\nPara digitar parametros de configuracao digite 'main.exe' e em seguida:\n\n");
    printf("    -d <num> - Define o deslocamento aleatorio maximo a ser usado na geracao.\n");
    printf("    -o <arq> - Define o nome do arquivo de imagem a ser gerado.\n\n");
    printf("Exemplo: main.exe -d 5 -o imagem\n\n");
}

int main(int argc, char* argv[]){
    // Parametros de configuração
    int sensibilidade = NULL;
    char *fileName;

    for(int i=0; i<argc; i++){
        if(strcmp(argv[i], "-d") == 0)
            sscanf(argv[i+1], "%d",  &sensibilidade);
        printf("argv[%d] = %s\n",i ,argv[i]);

        if(strcmp(argv[i], "-o") == 0)
            sscanf(argv[i+1], "%s",  fileName);
    }

    if (sensibilidade == NULL){
        sensibilidade = 5;
    }

    if (sensibilidade < 0){
        usage();
        exit(-1);
    }

    printf("\n\nSensibilidade = %d\nArgc = %d\nFileName = %s\n\n" , sensibilidade , argc, fileName);
    // Cria o tamanho horizontal da montanha 
    int n = 3;
    int range = pow(2, n) + 1;
    int montanha[range];

    criaMontanha(montanha, range, sensibilidade);

    // Mostra como ficou os valores de tamanho da montanha toda na tela
    for (size_t i = 0; i < range; i++){
        printf("%d ", montanha[i]);
    }
}