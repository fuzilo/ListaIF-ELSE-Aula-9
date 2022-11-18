#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
      setlocale(LC_ALL, "Portuguese");
      double salario_fixo, comissao3=0.03, comissao5=0.05, salario_final, vendas;
      printf("Vendedor, insira o valor fixo do salário\n");
      scanf("%lf", &salario_fixo);
      printf("Insira o valor em reais das vendas realizadas\n");
      scanf("%lf", &vendas);
      if (vendas <= 1500 && vendas > 0)
      {
          salario_final=salario_fixo+(vendas*comissao3);
          printf("O salário final do vendedor será de %lf reais",salario_final);
      }
      else if (vendas>1500)
      {
          salario_final=salario_fixo+(vendas*comissao5);
          printf("O salário final do vendedor será de %lf reais", salario_final);
      }
      else
      {
          printf("Os dados informados são inválidos");
      }

}
