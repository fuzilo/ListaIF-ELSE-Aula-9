#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
double valor;
printf("Insira um n�mero natural qualquer\n");
scanf("%lf",&valor);
if(valor>=0)
{
    printf("O n�mero inserido %lf � positivo",valor);
}
else
    printf("o n�mero inserido %lf � negativo", valor);

}
