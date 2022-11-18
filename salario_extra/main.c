#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
      setlocale(LC_ALL, "Portuguese");
double extra, semana1,semana2,semana3,semana4, salario, salario_final;
printf("Por favor, digite o valor do seu salário/hora base\n");
scanf("%lf", &salario);
printf("Quantas horas trabalhou na primeira semana?\n");
scanf("%lf", &semana1);
printf("Quantas horas trabalhou na segunda semana?\n");
scanf("%lf", &semana2);
printf("Quantas horas trabalhou na terceira semana?\n");
scanf("%lf", &semana3);
printf("Quantas horas trabalhou na quarta semana?\n");
scanf("%lf", &semana4);
extra=semana1+semana2+semana3+semana4;
if (extra>160)
{
    salario_final=((salario*160))+((extra-160)*1.5)*salario;
    printf("O salário final será de %lf reais", salario_final);
}
else if (extra >= 0 && extra <= 160)
{
    salario_final=extra*salario;
    printf("O salário final será de %lf reais", salario_final);
}
else
    printf("Horas trabalhadas inválidas");
}
