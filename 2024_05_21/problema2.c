// leia cinco valores e criar duas funcoes que retornem o maior e o menor elemento do array
#include <stdio.h>
#include <stdlib.h>

int printbig(int arr[]);
int printsmall(int arr[]);

int main(){
  int array[5];
  for (int i = 0; i < 5; i++) scanf("%d",  &array[i]);
  printbig(array);
  printsmall(array);
  return 0;
}

int printbig(int arr[]){
  int temp = 0;
  for (int i = 1; i < 5; i++){
    if(arr[i] > arr[temp]) temp = i;
  }
  printf("O indice do maior elemento do array eh %d\n", temp);
  return temp;
}

int printsmall(int arr[]){
  int temp = 0;
  for (int i = 1; i < 5; i++){
    if(arr[i] < arr[temp]) temp = i;
  }
  printf("O indice do menor elemento do array eh %d\n", temp);
  return temp;
}