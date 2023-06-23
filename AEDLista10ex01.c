#include <stdio.h>
#include <stdlib.h>

typedef struct cel{
    int num;
    struct cel *prox;
}numero;

numero *cria (void);

int main(){

    numero *cel[5];
    int inp;

    for (int i=0; i<5; i++){
        cel[i] = cria();
    }

    printf("type five numbers\n");

    for (int i=0; i<5; i++){
        scanf("%d",&inp);
        cel[i]->num = inp;
       // inserenum (cel[i], inp);
    }

    printf("numeros:");

    for (int i=0; i<5; i++){
        printf("\n");
        printf("%d", cel[i]->num);
    }
    
    for (int i=0; i<5; i++){
        free(cel[i]);
    }
}

numero *cria (void){

    numero *c=(numero*)malloc(sizeof(numero));
    c->prox=NULL;

    return c;
}

/*void inserenum (numero *N, int n){
    numero *att=(numero*)malloc(sizeof(numero));
    numero *sup=(numero*)malloc(sizeof(numero));
	
    sup = N;
    att->num = n;
    att->prox = NULL;

    if (N->prox == NULL){
        N->prox = att;
    }
    else {
        while (sup->prox!=NULL){
            sup = sup->prox;
        }
        sup->prox=att;
    }
}*/
