#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){

    int a = 0;
    int b = 0;
    int c = 0;

    setlocale(LC_ALL, "Portuguese");

    printf("Equação do 2º Grau - La Gloria\n");

printf("Qual valor de a?\n");
scanf("%d", &a);
printf("Qual valor de b?\n");
scanf("%d", &b);
printf("Qual valor de c?\n");
scanf("%d", &c);

int delta = b*b-4*a*c;

printf("Valor de Delta: %d\n", delta);

if(delta >= 0){
    delta = b*b-4*a*c;
    int x = ((-b)+sqrt(delta));
    int y = ((-b)-sqrt(delta));
    int z = x/(2*a);
    int w = y/(2*a);

    printf("Valor de X = %d\n", z);
    printf("Valor de Y = %d\n", w);
}
else{

    printf("Valor de Delta é inexistente!\n");
}

printf("Autoria de J. H. Duarte\n");
}
