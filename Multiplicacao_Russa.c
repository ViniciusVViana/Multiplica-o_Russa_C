#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include"funcoes.h"

int cont, imp[99], vezes, mult[99], soma;

void main(){

    int fat1, fat2, continuar;

    continuar = 1;

    setlocale(LC_ALL, "Portuguese_Brazil");

    do{

        system("clear||cls");

        printf("Neste programa voc� ira realizar uma mutiplica��o, por�m, n�o de forma convencional, sera pelo metodo da multiplica��o russa.\n");
        printf("Aonde dividimos o primeiro fatorando por 2, ignorando o resto at� chegar em 1, e multiplicando o segundo fatorando por 2 na mesma quantidade de vezes que o peimeiro numero foi dividido.\n");
        printf("E ent�o somando os valores multiplicados apartir do segundo valor, que s�o impares, relacionados com os valores divididos do primeiro valor.\n");

        zerar();
        printf("--------========*========--------\n");
        printf("Digite o primeiro fatorando: ");
        scanf("%i", &fat1);

        printf("Digite o segundo fatorando: ");
        scanf("%i", &fat2);

        fatorando1(fat1);
        fatorando2(fat2);

        somatoria(fat1, fat2);

        printf("--------========*========--------\n");

        for(cont = 0; imp[cont] != 0; cont++){

            printf("%i | %i\n", imp[cont], mult[cont]);

        };

        printf("--------========*========--------\n");

        printf("Este � o resultado da multiplica��o: %i\n", soma);

        printf("--------========*========--------\n");

        do{

            if((continuar != 1) && (continuar != 2)){

                printf("Voc� digitou um valor n�o esperado, por favor repita o processo.\n");

            };

            printf("Deseja realizar uma nova opera��o?\n");
            printf("1 para SIM ou 2 para N�O.\n");
            scanf("%i", &continuar);

        }while((continuar != 1) && (continuar != 2));

    }while(continuar == 1);

    printf("AGRADECO PELA SUA CONTRIBUI��O");

};
