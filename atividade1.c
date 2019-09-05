#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define getName(var) #var

int main(int arcg, char* argv []){
    setlocale(LC_ALL, "");

    printf("Matheus Carvalho\tRA: 00087294\nYukiko Sasaki\t\tRA: 00052235\n\n\nCONVERSAO ENTRE SISTEMAS SRU X SRD\n\n");

    int xu_min, xu_max, yu_min, yu_max, xd_min, xd_max, yd_min, yd_max, xu, xd, yu, yd, type, again, dispx, dispy, i;

    printf("Tipos de conversao:\n1. SRU --> SRD\n2. SRD --> SRU\n\nEscolha o tipo de conversao: ");
    scanf("%d", &type);

    again, i = 1;
    int resx, resy = 0;

    //Definir tipo de conversão (SRU -> SRD ou SRD -> SRU)
    switch(type){
        case 1:
            //Definir variáveis
            printf("\n\nSRU --> SRD\n");
            printf("\nValor de Xu minimo: ");
            scanf("%d", &xu_min);
            printf("\nValor de Xu maximo: ");
            scanf("%d", &xu_max);
            printf("\nValor de Yu minimo: ");
            scanf("%d", &yu_min);
            printf("\nValor de Yu maximo: ");
            scanf("%d", &yu_max);

            printf("Resolução 'x' do dispositivo (->x, y): ");
            scanf("%d", &dispx);
            printf("Resolução 'y' do dispositivo (%d, ->y): ", dispx);
            scanf("%d", &dispy);

            xd = ((dispx/xu_max) * xu);
            yd = ((-dispy / yu_max) * yu);

            printf("\n\nA funcao de X: %d%s", xd, getName(xu));
            
            if(dispy > 0)
            {
                printf("\nA funcao de Y: %d%s + %d", yd, getName(yu), dispy);
            }
            else
            {
                printf("\nA funcao de Y: %d%s - %d", yd, getName(yu), dispy);
            }
            
            do
            {
                resx, resy = 0;
                printf("\n\nInforme o 'X' do ponto %d(X, Y): ", i);
                scanf("%d", &xd);
                printf("\nInforme o 'Y' do ponto %d(%d, Y): ", i, xd);
                scanf("%d", yd);
                
                if(dispy > 0)
                {
                    resx = (dispx/xu_max)*xd;
                    resy = ((-dispy/xu_max)*yd)+dispy;

                    printf("P%d(x,y)= %d, %d", i, xd, yd);
                }
                else
                {
                    resx = (dispx/xu_max)*xd;
                    resy = ((-dispx/xu_max)*yd)-dispy;

                    printf("P%d(x, y)= %d, %d", i, xd, yd);
                }

                printf("\n\nAdicionar mais pontos?[1 - Sim, 2 - Não]");
                scanf("%d", &again);
                i++;
            } while (again == 1);
            

        case 2:
            printf("\nSRD --> SRU");
    }
    return 0;
}


