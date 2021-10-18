#include <stdio.h>
#include <stdlib.h>

int n;

int BuscaBinaria(int *a, int k){
    int inicio = 0;
    int fim = n-1;

    int meio;

    while(inicio<=fim){

    meio = (inicio+fim)/2;

    if(a[meio] == k){
        return meio;
    }
    if(a[meio] < k){
        inicio = meio+1;
    }
    else{
        fim = meio-1;
    }
    }
    return NULL;
}

int main(){

    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int k;
    scanf("%d", &k);

     int resultado = BuscaBinaria(a, k);

    if(resultado == NULL){
        printf("Valor nao encontrado");
    }
    else{
        printf("%d", resultado);
    }


    return 0;
}
