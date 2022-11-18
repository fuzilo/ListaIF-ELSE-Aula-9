#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
double valor;
printf("Insira um número natural qualquer\n");
scanf("%lf",&valor);
if(valor>=0)
{
    printf("O número inserido %lf é positivo",valor);
}
else
    printf("o número inserido %lf é negativo", valor);

}
