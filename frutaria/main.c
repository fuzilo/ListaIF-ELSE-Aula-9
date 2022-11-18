#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");
int maca;
double valor_cheio=1.30, valor_desconto=1.00, total;
printf("Digite a quantidade de Maçãs compradas\n");
scanf("%d", &maca);
    if(maca>=12)
{
total=(maca*valor_desconto);
printf("%lf",total);
}
    else if (maca>0)
    {
total=maca*valor_cheio;
printf("%lf", total);
    }
else
    printf("quantidade Inválida");



}
