int cont, imp[99], vezes, mult[99], soma;

int fatorando1(int a){

    int aux;

    vezes = 0;
    imp[0] = a;

    for(cont = 1; a != 1; cont++){

        if((a % 2) == 1){
            a = a - 1;
        };

        aux = a / 2;
        imp[cont] = aux;
        a = imp[cont];
        vezes++;

    };

};

int fatorando2(int a){

    int aux;

    mult[0] = a;

    for(cont = 1; cont <= vezes; cont++){

        aux = a * 2;
        mult[cont] = aux;
        a = mult[cont];

    };

};

void zerar(){

    soma = 0;

    for(cont = 0; cont <= 99; cont++){

        imp[cont] = 0;
        mult[cont] = 0;

    };

}

int somatoria(){

    for(cont = 0; cont <= vezes; cont++){

        if((imp[cont] % 2) == 1){

            soma = soma + mult[cont];

        };

    };

};
