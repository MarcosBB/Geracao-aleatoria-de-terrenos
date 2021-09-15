#include <stdio.h>
#include "settings.h"
#include "montanha.h"

void criaimagem( int *content){ // Cria um arquivo de imagem ppm baseado no array content
    FILE *arquivo = fopen( "teste.ppm", "w" ); 

    const char branco[] = "255 255 255\n";
    const char preto[] = "0 0 0\n";

    if( arquivo == NULL ){
	printf( "Erro na criacao da imagem" );
    }
    else{
        fprintf(arquivo, "P3\n");
        fprintf(arquivo, "%d %d\n", tamanhoMaximo, range()); // (largura, altura)
        fprintf(arquivo, "255\n");

        for (size_t i = 0; i < range(); i++)
        {
            for (size_t j = 0; j < tamanhoMaximo; j++)
            {
                if (j < tamanhoMaximo - content[i])
                    fprintf(arquivo, branco);
                else
                    fprintf(arquivo, preto);
                
            }
            fprintf(arquivo, "\n");
        }
        
        fclose(arquivo);
        printf("\nO arquivo foi criado com sucesso!!!");

    }
    
}

