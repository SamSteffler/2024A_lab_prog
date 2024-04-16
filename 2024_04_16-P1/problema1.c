#include <stdio.h>
#include <stdlib.h>

int main() {
  char c1, c2, c3;
  int au1, au2, au3;
  int pub1, pub2, pub3;
  int p1, p2, p3;
  int cp1, cp2, cp3;
  char tempc;
  int temp;

  printf(
      "Modo de insercao:\nnome  num_autores  ano_publicacao  "
      "numero_de_paginas  numero_copias\nInsira os dados do primeiro livro: ");
  scanf(" %c %d %d %d %d", &c1, &au1, &pub1, &p1, &cp1);
  printf("%c, %d, %d, %d, %d\n", c1, au1, pub1, p1, cp1);

  printf(
       "Modo de insercao:\nnome  num_autores  ano_publicacao  "
      "numero_de_paginas  numero_copias\nInsira os dados do segundo livro: ");
  scanf(" %c %d %d %d %d", &c2, &au2, &pub2, &p2, &cp2);
  //printf("%c, %d, %d, %d, %d\n", c2, au2, pub2, p2, cp2);

  if (c1 == c2) {
    printf("O nome do livro precisa ser diferente! Tente novamente:\n");
    printf("Insira o novo nome do segundo livro: ");
    scanf(" %c", &c2);
    //printf("%c\n", c2);
  }

  printf(
       "Modo de insercao:\nnome  num_autores  ano_publicacao  "
      "numero_de_paginas  numero_copias\nInsira os dados do terceiro livro: ");
  scanf(" %c %d %d %d %d", &c3, &au3, &pub3, &p3, &cp3);
  //printf("%c, %d, %d, %d, %d\n", c3, au3, pub3, p3, cp3);

  if (c3 == c2 || c3 == c1) {
    printf("O nome do livro precisa ser diferente! Tente novamente.\n");
    printf("Insira o novo nome do terceiro livro: ");
    scanf(" %c", &c3);
    //printf("%c\n", c3);
  }

//========================================================================================================

  printf("\n\n==== BUSCA ====\n\nInsira o numero de autores: ");
  scanf("%d", &temp);
  
  if (temp == au1){
  
    printf("Encontrado! Aqui estao as informacoes:\n");
    printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c1, au1, pub1, p1, cp1);
  
  }
  if (temp == au2){
  
    printf("Encontrado! Aqui estao as informacoes:\n");
    printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c2, au2, pub2, p2, cp2);

  }
  if (temp == au3){
  
    printf("Encontrado! Aqui estao as informacoes:\n");
    printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c3, au3, pub3, p3, cp3);

  }
  if (temp != au1 && temp != au2 && temp != au3) printf("Dados nao encontrados.\n");

//========================================================================================================

  printf("\nInsira o ano de publicacao: ");
  scanf("%d", &temp);
  //printf("%d\n", temp);

  if (pub1 > temp){
  
    printf("Encontrado! Aqui estao as informacoes:\n");
    printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c1, au1, pub1, p1, cp1);
  
  }
  if (pub2 > temp){
  
    printf("Encontrado! Aqui estao as informacoes:\n");
    printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c2, au2, pub2, p2, cp2);

  }
  if (pub3 > temp){
  
    printf("Encontrado! Aqui estao as informacoes:\n");
    printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c3, au3, pub3, p3, cp3);

  }
  if (pub1 <= temp && pub2 <= temp && pub3 <= temp) printf("Nao existe nenhum livro publicado a partir desta data.\n");

//========================================================================================================

float media = (float)(cp1 + cp2 + cp3) / 3.0f;


  printf("\nLivros com menos copias que a media (%.3f):\n", media);
  
  if (media > cp1){
  
    //printf("Encontrado! Aqui estao as informacoes:\n");
    printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c1, au1, pub1, p1, cp1);
  
  }
  if (media > cp2){
  
    //printf("Encontrado! Aqui estao as informacoes:\n");
    printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c2, au2, pub2, p2, cp2);

  }
  if (media > cp3){
  
    //printf("Encontrado! Aqui estao as informacoes:\n");
    printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c3, au3, pub3, p3, cp3);

  }
  if (media <= cp1 && media <= cp2 && media <= cp3) printf("Nenhum livro possui copias a menos que a media.\n");

//========================================================================================================
  
  printf("\nInsira o nome do livro a ser excluido: ");
  scanf(" %c", &tempc);
  
  if (tempc == c1){
  
    printf("Livro \"%c\" sera excluido. Aqui estao os livros que restaram:\n", c1);
    //printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c1, au1, pub1, p1, cp1);
    printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c2, au2, pub2, p2, cp2);
    printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c3, au3, pub3, p3, cp3);

  }
  if (tempc == c2){
  
    printf("Livro \"%c\" sera excluido. Aqui estao os livros que restaram:\n", c2);
    printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c1, au1, pub1, p1, cp1);
    //printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c2, au2, pub2, p2, cp2);
    printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c3, au3, pub3, p3, cp3);

  }
  if (tempc == c3){
  
    printf("Livro \"%c\" sera excluido. Aqui estao os livros que restaram:\n", c3);
    printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c1, au1, pub1, p1, cp1);
    printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c2, au2, pub2, p2, cp2);
    //printf("Nome: %c\nAutores: %d\nAno publicacao: %d\nPaginas: %d\nCopias %d\n\n", c3, au3, pub3, p3, cp3);

  }
  if (tempc != c1 && tempc != c2 && tempc != c3) printf("Nenhum livro pode ser excluido.\n");

  return 0;
}