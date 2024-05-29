// formatacao de nome estilo ABNT: Nome do Sujeito => SUJEITO, Nome do
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int lastSpace = 0;
  char nome[50], novonome[50], sobrenome[50];
  fgets(nome, 50, stdin);
  printf("%s\n", nome);
  for (int i = 0; nome[i] != '\0'; i++){
    //printf("%d\n", i);
    if (nome[i] == 32) {
      //printf("kkk");
      lastSpace = i;
    }
  }
  printf("%d\n", lastSpace);
  for(int i = lastSpace; nome[i] != '\0'; i++) sobrenome[i - lastSpace] = nome[i];
  printf("%s\n", sobrenome);
}