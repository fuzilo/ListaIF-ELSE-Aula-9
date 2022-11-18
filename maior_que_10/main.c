#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "portuguese");
   double valor;
   printf("Insira o valor para uma variável\n");
   scanf("%lf", &valor);
   if ( valor > 10)
   printf ("O valor digitado é maior que 10\n");
   else
   printf("O valor digitado Não é maior que 10!\n");

}

