#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int arcg, char* argv []){
    setlocale(LC_ALL, "");

    printf("Matheus Carvalho\tRA: 00087294\nYukiko Sasaki\t\tRA: 00052235\n\n\nCONVERSAO ENTRE SISTEMAS SRU X SRD\n\n");

    int xu_min, xu_max, yu_min, yu_max, xd_min, xd_max, yd_min, yd_max, xu, yu, type, dispx, dispy;

    printf("Tipos de conversao:\n1. SRU --> SRD\n2. SRD --> SRU\n\nEscolha o tipo de conversao: ");
    scanf("%d", &type);

    int again, xd, yd = 1;
    int resx, resy = 0;

    //Definir tipo de conversão (SRU -> SRD ou SRD -> SRU)
    switch(type){
        case 1:
            xu = 1;
            yu = 1;
            int i = 1;

            //Receber os valores das variáveis
            printf("\n\nSRU --> SRD\n");
            printf("\nValor de Xu minimo: ");
            scanf("%d", &xu_min);
            printf("\nValor de Xu maximo: ");
            scanf("%d", &xu_max);
            printf("\nValor de Yu minimo: ");
            scanf("%d", &yu_min);
            printf("\nValor de Yu maximo: ");
            scanf("%d", &yu_max);

            // Receber os valores da resolução (x e y)
            printf("Resolução 'x' do dispositivo (->x, y): ");
            scanf("%d", &dispx);
            printf("Resolução 'y' do dispositivo (%d, ->y): ", dispx);
            scanf("%d", &dispy);

            // Cálculo do 'xd' e 'dy'
            xd = (dispx/xu_max) * xu;
            yd = ((-dispy / yu_max) * yu);

            // Mostrando o resultado de 'xd' na tela
            printf("\n\nA funcao de X: %dxu", xd);
            
            // Se o display do eixo y for maior que 0, mostrar o sinal positivo
            // Se o display do eixo y for menor que 0, mostrar o sinal negativo
            if(dispy > 0)
            {
                printf("\nA funcao de Y: %dyu + %d", yd, dispy);
            }
            else
            {
                printf("\nA funcao de Y: %dyu - %d", yd, dispy);
            }
            
            // Looping do while para inserção das coordenadas dos pontos
            do
            {
                resx, resy = 0;
                printf("\n\nInforme o 'X' do ponto %d(X, Y): ", i);
                scanf("%d", &xd);
                printf("\nInforme o 'Y' do ponto %d(%d, Y): ", i, xd);
                scanf("%d", &yd);
                
                // Se o display do eixo y for menor que 0 mostrar as equações de acordo
                // Senão mostrar as outras equações
                if(dispy > 0)
                {
                    resx = (dispx/xu_max)*xd;
                    resy = ((-dispx/xu_max)*yd)+dispy;

                    printf("P%d(%d,%d)  XD=%d, YD=%d", i, xd, yd, resx, resy);
                }
                else
                {
                    resx = (dispx/xu_max)*xd;
                    resy = ((-dispx/xu_max)*yd)-dispy;

                    printf("P%d(%d,%d)  XD=%d, YD=%d", i, xd, yd, resx, resy);
                }

                // Continuar adicionando pontos com coordenadas
                printf("\n\nAdicionar mais pontos?[1 - Sim, 2 - Não]");
                scanf("%d", &again);
                i++;
            } while (again == 1);
            break;

        case 2:
            printf("\nSRD --> SRU");
    }
    return 0;
}


