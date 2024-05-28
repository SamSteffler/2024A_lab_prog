//imprime 5 valores armazenados e informados pelo usuario em um array na ordem que foram digitados ou de forma reversa

#include <stdio.h>
#include <stdlib.h>

void printarr(int arr[]);

int main(){
  int arr[5];
  for (int i = 0; i < 5; i++){
    scanf("%d", &arr[i]);
  }
  printarr(arr);
  return 0;
}

void printarr(int arr[]){
  for (int i = 0; i < 5; i++){
    printf("arr[%d] = %d\n", i, arr[i]);
  }
  printf("\n");
  for (int i = 5 - 1; i >= 0; i--){
    printf("arr[%d] = %d\n", i, arr[i]);
  }
}