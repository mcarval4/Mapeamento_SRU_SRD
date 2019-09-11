#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int arcg, char* argv []){
    setlocale(LC_ALL, "");

    printf("Matheus Carvalho\tRA: 00087294\nYukiko Sasaki\t\tRA: 00052235\n\n\nCONVERSAO ENTRE SISTEMAS SRU X SRD\n\n");

    float xu_min, xu_max, yu_min, yu_max, xd_min, xd_max, yd_min, yd_max, xu, yu, xd, yd;
    int type, again, i;

    printf("Tipos de conversao:\n1. SRU --> SRD\n2. SRD --> SRU\n\nEscolha o tipo de conversao: ");
    scanf("%d", &type);

    again = 1;
    i = 1;

    switch(type){
        case 1:
            printf("\nSRU --> SRD\n");
            printf("Valor de Xu minimo: ");
            scanf("%f", &xu_min);
            printf("Valor de Xu maximo: ");
            scanf("%f", &xu_max);
            printf("Valor de Yu minimo: ");
            scanf("%f", &yu_min);
            printf("Valor de Yu maximo: ");
            scanf("%f", &yu_max);
            printf("Valor de Xd minimo: ");
            scanf("%f", &xd_min);
            printf("Valor de Xd maximo: ");
            scanf("%f", &xd_max);
            printf("Valor de Yd minimo: ");
            scanf("%f", &yd_min);
            printf("Valor de Yd maximo: ");
            scanf("%f", &yd_max);

            do
            {
                printf("\nInforme o 'Xu' do ponto %d(x, y): ", i);
                scanf("%f", &xu);
                printf("Informe o 'Yu' do ponto %d(%.0f, y): ", i, xu);
                scanf("%f", &yu);

                xd = (((xd_max - xd_min)*(xu - xu_min))/(xu_max - xu_min)) + xd_min;
                yd = (((yd_min - yd_max)*(yu - yu_min))/(yu_max - yu_min)) + yd_max;

                printf("\nPonto %d(%.0f,%.0f)  Xd = %.0f, Yd = %.0f", i, xu, yu, xd, yd);

                printf("\n\nAdicionar mais pontos?\n1. Sim\n2. Não\n");
                scanf("%d", &again);
                i++;
            } while (again == 1);

            break;

        case 2:
            printf("\nSRU --> SRD\n");
            printf("Valor de Xu minimo: ");
            scanf("%f", &xu_min);
            printf("Valor de Xu maximo: ");
            scanf("%f", &xu_max);
            printf("Valor de Yu minimo: ");
            scanf("%f", &yu_min);
            printf("Valor de Yu maximo: ");
            scanf("%f", &yu_max);
            printf("Valor de Xd minimo: ");
            scanf("%f", &xd_min);
            printf("Valor de Xd maximo: ");
            scanf("%f", &xd_max);
            printf("Valor de Yd minimo: ");
            scanf("%f", &yd_min);
            printf("Valor de Yd maximo: ");
            scanf("%f", &yd_max);

            do
            {
                printf("\nInforme o 'Xd' do ponto %d(x, y): ", i);
                scanf("%f", &xd);
                printf("Informe o 'Yd' do ponto %d(%.0f, y): ", i, xd);
                scanf("%f", &yd);

                xu = (((xd - xd_min)*(xu_max - xu_min))/(xd_max - xd_min)) + xu_min;
                yu = (((yd - yd_max)*(yu_max - yu_min))/(yd_min - yd_max)) + yu_min;

                printf("\nPonto %d(%.0f,%.0f)  Xu = %.0f, Yu = %.0f", i, xd, yd, xu, yu);

                printf("\n\nAdicionar mais pontos?\n1. Sim\n2. Não\n");
                scanf("%d", &again);
                i++;
            } while (again == 1);

            break;
    }
    return 0;
}
