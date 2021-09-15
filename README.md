# Geração aleatória de terrenos

É um projeto desenvolvido durante a disciplina de ITP (introdução às tecnicas de programação) com o objetivo de gerar montanhas para um jogo 2D.

O projeto segue uma [descrição disponibilizada pelo professor](https://docs.google.com/document/d/e/2PACX-1vSgt4OLf336SvjRw--C9oAjyL3PdF2aMeSXGcVoxPVGGizkGd8kIN4LG2m8EJ2L9IwAjTAdPs9NtanS/pub)

## Sumário

- [Geração aleatória de terrenos](#geração-aleatória-de-terrenos)
  - [Sumário](#sumário)
  - [Lista de objetivos](#lista-de-objetivos)
  - [O que foi feito?](#o-que-foi-feito)
  - [O que não foi feito?](#o-que-não-foi-feito)
  - [O que seria feito diferentemente?](#o-que-seria-feito-diferentemente)
  - [Compilando e rodando o projeto](#compilando-e-rodando-o-projeto)
    - [Compilando](#compilando)
    - [Rodando](#rodando)
    - [Sobre a imagem gerada](#sobre-a-imagem-gerada)
  - [Autores](#autores)


## Lista de objetivos

- [x] Modularização do programa (quais os arquivos .c e .h);
- [x] Definição dos tipos de dados necessários (typedef e structs);
- [x] Geração da linha de contorno em um arranjo.
- [x] Leitura dos parâmetros de configuração (fator de deslocamento) em linha de comando;
- [x] Criação de uma imagem a partir do arranjo com a linha de contorno.
- [ ] Implementação de elementos adicionais, definidos pelo próprio grupo.
  
## O que foi feito?
Tudo o que foi requisitado foi feito, menos o que foi informado abaixo. Nenhuma funcionalidade extra foi implementada.
## O que não foi feito?
Não foi possivel entregar a leitura do parametro do nome do arquivo graças a um bug em cima da hora.

## O que seria feito diferentemente?
A mudança que seria feita para melhorar o programa seria a de possibilitar a mudança de outras variaveis de configuração pelo terminal, como a `sensibilidade` e o `tamanhoMaximo`.

## Compilando e rodando o projeto
### Compilando
Para compilar digite o seguinte no seu terminal ou cmd:

```g++ main.c montanha.c imagem.c -o main```

### Rodando
Para digitar parâmetros de configuração digite `main.exe` e em seguida:

  -d <num> - Define o deslocamento aleatório maximo a ser usado na geração.

  Exemplo: `main.exe -d 5`

### Sobre a imagem gerada
A imagem gerada deve ser rotacionada para a direita para uma melhor visualização da mesma.

## Autores
- Marcos Beraldo Barros
