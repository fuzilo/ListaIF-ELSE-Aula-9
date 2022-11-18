#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
      setlocale(LC_ALL, "Portuguese");
      int estoque_atual, estoque_max, estoque_min;
      double estoque_medio;
      printf("Informe a quantidade máxima de estoque\n");
      scanf("%d", &estoque_max);
      printf("Informe a quantidade mínima de estoque\n");
      scanf("%d", &estoque_min);
      printf("Informe a atual em estoque\n");
      scanf("%d", &estoque_atual);
      estoque_medio=(estoque_max+estoque_min)/2;
      if (estoque_atual >= estoque_medio)
      {
          printf("Não efetuar compra");
      }
      else if (estoque_atual>0 && estoque_atual < estoque_medio)
      {
          printf("Efetuar a compra");
      }
    else
        printf("Dados de estoque inválidos");
}
