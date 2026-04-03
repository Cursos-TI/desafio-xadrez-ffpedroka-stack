#include <stdio.h>
 
void recursiva(int rainha){
   if (rainha > 0){
       printf("Esquerda\n");  //codigo imprimir
       recursiva(rainha - 1); //chamada da recursiva
   }
}
int main() {
//Rainha 
    int rainha = 8;
    recursiva(rainha);
//chamada da recursiva
    int i;
    int j;
    int movimentoCompleto = 1;

// Bispo (5 vezes)
for (i = 1; i <= 5; i++)
{
   printf("Bispo, diagonal\n");
}

// Torre (5 vezes)         
i = 1;
    while (i <= 5) {
        printf("Torre, frente %d\n", i);
        i++;
    }
// cavalo (frente2 e direita 1)   
     for (i = 1; i <= 2; i++)
     {
        for (j = 1; j <= 1; j++)
       printf("cavalo ,frente\n");
     }
      printf("Cavalo ,direita\n");


  return 0;
}

