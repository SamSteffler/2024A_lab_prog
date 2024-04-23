#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define toint(x) (x - 48)
#define tochar(x) (48 + x)

int main() {
  // digitos do codigo
  int c1, c2, c3, c4, c5, c6;
  // cifras de cesar
  int ce1, ce2, ce3, ce4, ce5, ce6, ceall;
  int win = 0;
  long int pass, ans;
  int tries = 0;

  srand(time(NULL));
  rand();

  pass = (rand() * 100) % 1000000;
  pass += rand();

  c1 = (pass / 100000) % 10;
  c2 = (pass / 10000) % 10;
  c3 = (pass / 1000) % 10;
  c4 = (pass / 100) % 10;
  c5 = (pass / 10) % 10;
  c6 = pass % 10;

  ce1 = rand() % 10;
  ce2 = rand() % 10;
  ce3 = rand() % 10;
  ce4 = rand() % 10;
  ce5 = rand() % 10;
  ce6 = rand() % 10;
  ceall = ce1;

  //printf("pass = %06d\n", pass);
  //printf("char = %d%d%d%d%d%d\n", c1, c2, c3, c4, c5, c6);

  char c = '\0';

  printf("Insira o modo de jogo, [F]acil ou [D]ificil: ");
  scanf(" %c", &c);

  switch (c) {
    case 'F':
    case 'f':
      // modo facil

      c1 = (c1 + ceall) % 10;
      c2 = (c2 + ceall) % 10;
      c3 = (c3 + ceall) % 10;
      c4 = (c4 + ceall) % 10;
      c5 = (c5 + ceall) % 10;
      c6 = (c6 + ceall) % 10;

      //printf("ceall eh %d\n", ceall);

      pass = c1 * 100000 + c2 * 10000 + c3 * 1000 + c4 * 100 + c5 * 10 + c6;

      break;

    case 'D':
    case 'd':
      // modo dificil

      c1 = (c1 + ce1) % 10;
      c2 = (c2 + ce2) % 10;
      c3 = (c3 + ce3) % 10;
      c4 = (c4 + ce4) % 10;
      c5 = (c5 + ce5) % 10;
      c6 = (c6 + ce6) % 10;

      //printf("cesar = %d%d%d%d%d%d\n", ce1, ce2, ce3, ce4, ce5, ce6);

      pass = c1 * 100000 + c2 * 10000 + c3 * 1000 + c4 * 100 + c5 * 10 + c6;

      break;

    default:
      break;
  }
  int a = 0;
  printf("novo code = %d%d%d%d%d%d\n", c1, c2, c3, c4, c5, c6);
  do {
    printf("Insira o seu chute ([D]esistir): ");
    int teste = scanf("%d", &ans);

    if (teste == 1) {
      tries++;

      if (pass == ans) {
        printf("Acertou!!!\n");
        win = 1;
      } else {
        printf("Errou!!!\n");
        a++;

        switch (a % 5) {
          case 0:
            printf("O ultimo digito da senha eh igual a %d\n", c6);
            break;

          case 1:
            printf("O numero eh %s\n", pass % 2 == 0 ? "par" : "impar");
            break;

          case 2:
            printf("O numero chutado eh %s que a senha\n",
                   ans > pass ? "maior" : "menor");
            break;

          case 3:
          {
            int same = 0;
            for (int i = 1; i <= 100000; i *= 10) {
              //printf("%d\n", i);
              if ((ans / i) % 10 == (pass / i) % 10) same++;
            }
            printf("%d numeros estao no lugar correto\n", same);
            break;
          }
          case 4:
            printf("A soma dos algarismos da senha eh %d\n",
                   c1 + c2 + c3 + c4 + c5 + c6);
            break;
        }
      }

    } else
      break;

  } while (pass != ans);

  printf("Total de tentativas: %d\n", tries);
  printf("Pontuacao: %d de 100 pontos\n\n", win == 1 ? ((101 - tries < 0 ? 0 : 101 - tries) > 100 ? 100 : 101 - tries) : 0);

  return 0;
}