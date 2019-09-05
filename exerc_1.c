#include <stdio.h>

int main()
{

	int Xumin, Xumax, Yumin, Yumax, DispX, DispY;
	int p1x, p1y, p2x, p2y, p3x, p3y, p4x, p4y, p5x, p5y;
	int xd,xu,yu,yd,xd1,yd1,xd2,yd2,xd3,yd3,xd4,yd4,xd5,yd5;
    int tipo;

    printf("Para transformar SRU para SRD, clique 1: \n");
    printf("Para transformar SRD para SRU, clique 2: \n");
    scanf("%d",&tipo);
     if ((tipo != 1) && (tipo != 2))
     {
        printf("N�o existe esse tipo");
        return 0;
     }
    switch (tipo)
    {
        case 1:
            xu=1;
            yu=1;

            printf("Informe o Xumin: ");
            scanf("%d",&Xumin);

            printf("Informe o Xumax: ");
            scanf("%d",&Xumax);

            printf("Informe o Yumin: ");
            scanf("%d",&Yumin);

            printf("Informe o Yumax: ");
            scanf("%d",&Yumax);

            printf("Informe o DispX: ");
            scanf("%d",&DispX);

            printf("Informe o DispY: ");
            scanf("%d",&DispY);

            xd = (DispX/Xumax)*xu;
            printf("\n\n A funcao de X eh:% d",xd);
            printf(".xu");

            yd = ((-DispY/Yumax)*yu);
            printf("\n A funcao de Y eh:% d",yd);
            if (DispY>0)
            {
                printf(".yu + %d",DispY);
            }
            else
            {
                printf(".yu - %d",DispY);
            }

            printf("\n\nInforme o Ponto 1(X Y): ");
            scanf("%d %d",&p1x, &p1y);

            printf("\nInforme o Ponto 2(X Y): ");
            scanf("%d %d",&p2x, &p2y);

            printf("\nInforme o Ponto 3(X Y): ");
            scanf("%d %d",&p3x, &p3y);

            printf("\nInforme o Ponto 4(X Y): ");
            scanf("%d %d",&p4x, &p4y);

            printf("\nInforme o Ponto 5(X Y): ");
            scanf("%d %d",&p5x, &p5y);

            if(DispY>0) {
                xd1 = (DispX/Xumax)*p1x;
                printf("\nXD no ponto 1: %d",xd1);

                yd1 = ((-DispX/Xumax)*p1y)+DispY;
                printf("\nYD no ponto 1: %d",yd1);

                xd2 = (DispX/Xumax)*p2x;
                printf("\n\nXD no ponto 2: %d",xd2);

                yd2 = ((-DispX/Xumax)*p2y)+DispY;
                printf("\nYD no ponto 2: %d",yd2);

                xd3 = (DispX/Xumax)*p3x;
                printf("\n\nXD no ponto 3: %d",xd3);

                yd3 = ((-DispX/Xumax)*p3y)+DispY;
                printf("\nYD no ponto 3: %d",yd3);

                xd4 = (DispX/Xumax)*p4x;
                printf("\n\nXD no ponto 4: %d",xd4);

                yd4 = ((-DispX/Xumax)*p4y)+DispY;
                printf("\nYD no ponto 4: %d",yd4);

                xd5 = (DispX/Xumax)*p5x;
                printf("\n\nXD no ponto 5: %d",xd3);

                yd5 = ((-DispX/Xumax)*p5y)+DispY;
                printf("\nYD no ponto 5: %d",yd5);
            }
            else {
                xd1 = (DispX/Xumax)*p1x;
                printf("\nXD no ponto 1: %d",xd1);

                yd1 = ((-DispX/Xumax)*p1y)-DispY;
                printf("\nYD no ponto 1: %d",yd1);

                xd2 = (DispX/Xumax)*p2x;
                printf("\n\nXD no ponto 2: %d",xd2);

                yd2 = ((-DispX/Xumax)*p2y)-DispY;
                printf("\nYD no ponto 2: %d",yd2);

                xd3 = (DispX/Xumax)*p3x;
                printf("\n\nXD no ponto 3: %d",xd3);

                yd3 = ((-DispX/Xumax)*p3y)-DispY;
                printf("\nYD no ponto 3: %d",yd3);

                xd4 = (DispX/Xumax)*p4x;
                printf("\n\nXD no ponto 4: %d",xd4);

                yd4 = ((-DispX/Xumax)*p4y)-DispY;
                printf("\nYD no ponto 4: %d",yd4);

                xd5 = (DispX/Xumax)*p5x;
                printf("\n\nXD no ponto 5: %d",xd3);

                yd5 = ((-DispX/Xumax)*p5y)-DispY;
                printf("\nYD no ponto 5: %d",yd5);
            }
            break;



            case 2:
            printf("teste 2");
            xu=1;
            yu=1;

            printf("Informe o Xumin: ");
            scanf("%d",&Xumin);

            printf("Informe o Xumax: ");
            scanf("%d",&Xumax);

            printf("Informe o Yumin: ");
            scanf("%d",&Yumin);

            printf("Informe o Yumax: ");
            scanf("%d",&Yumax);

            printf("Informe o DispX: ");
            scanf("%d",&DispX);

            printf("Informe o DispY: ");
            scanf("%d",&DispY);

            xu = (DispX/Xumax);
            printf("\n\n A funcao de X eh: xu");
            printf("%d",xu);
//yd -1024 = -128yu
//yu = yd -1024 / 128
            yu =((-DispY)/(DispY/Yumax));
            printf("\n A funcao de Y eh:% d",yu);
            if (DispY>0)
            {
                printf(".yu - %d",DispY);
            }
            else
            {
                printf(".yu + %d",DispY);
            }

            printf("\n\nInforme o Ponto 1(X Y): ");
            scanf("%d %d",&p1x, &p1y);

            printf("\nInforme o Ponto 2(X Y): ");
            scanf("%d %d",&p2x, &p2y);

            printf("\nInforme o Ponto 3(X Y): ");
            scanf("%d %d",&p3x, &p3y);

            printf("\nInforme o Ponto 4(X Y): ");
            scanf("%d %d",&p4x, &p4y);

            printf("\nInforme o Ponto 5(X Y): ");
            scanf("%d %d",&p5x, &p5y);

            if(DispY>0) {
                xd1 = (DispX/Xumax)*p1x;
                printf("\nXD no ponto 1: %d",xd1);

                yd1 = ((-DispX/Xumax)*p1y)+DispY;
                printf("\nYD no ponto 1: %d",yd1);

                xd2 = (DispX/Xumax)*p2x;
                printf("\n\nXD no ponto 2: %d",xd2);

                yd2 = ((-DispX/Xumax)*p2y)+DispY;
                printf("\nYD no ponto 2: %d",yd2);

                xd3 = (DispX/Xumax)*p3x;
                printf("\n\nXD no ponto 3: %d",xd3);

                yd3 = ((-DispX/Xumax)*p3y)+DispY;
                printf("\nYD no ponto 3: %d",yd3);

                xd4 = (DispX/Xumax)*p4x;
                printf("\n\nXD no ponto 4: %d",xd4);

                yd4 = ((-DispX/Xumax)*p4y)+DispY;
                printf("\nYD no ponto 4: %d",yd4);

                xd5 = (DispX/Xumax)*p5x;
                printf("\n\nXD no ponto 5: %d",xd3);

                yd5 = ((-DispX/Xumax)*p5y)+DispY;
                printf("\nYD no ponto 5: %d",yd5);
            }
            else {
                xd1 = (DispX/Xumax)*p1x;
                printf("\nXD no ponto 1: %d",xd1);

                yd1 = ((-DispX/Xumax)*p1y)-DispY;
                printf("\nYD no ponto 1: %d",yd1);

                xd2 = (DispX/Xumax)*p2x;
                printf("\n\nXD no ponto 2: %d",xd2);

                yd2 = ((-DispX/Xumax)*p2y)-DispY;
                printf("\nYD no ponto 2: %d",yd2);

                xd3 = (DispX/Xumax)*p3x;
                printf("\n\nXD no ponto 3: %d",xd3);

                yd3 = ((-DispX/Xumax)*p3y)-DispY;
                printf("\nYD no ponto 3: %d",yd3);

                xd4 = (DispX/Xumax)*p4x;
                printf("\n\nXD no ponto 4: %d",xd4);

                yd4 = ((-DispX/Xumax)*p4y)-DispY;
                printf("\nYD no ponto 4: %d",yd4);

                xd5 = (DispX/Xumax)*p5x;
                printf("\n\nXD no ponto 5: %d",xd3);

                yd5 = ((-DispX/Xumax)*p5y)-DispY;
                printf("\nYD no ponto 5: %d",yd5);
            }
            break;


}
return 0;
}
