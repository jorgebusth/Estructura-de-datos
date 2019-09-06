#include <stdio.h>
#include <stdlib.h>

void reordenar(int n, int *A);
void imprimirorden(int n, int *A);

main(){

    int n, i, *A;

    printf("Cuantos numeros se van a introducir: ");
    scanf("%d",&n);
    printf("\n");

    A=(int*)malloc(sizeof(int)*n);

    for(i=0;i<n;++i){
        printf("i=%d x= ",i+1);
        scanf("%d",&A[i]);
    }

    reordenar(n,A);

    imprimirorden(n,A);

    return 0;
}

void reordenar(int n, int *A){

    int i, elem,temp;

    for(elem=0;elem<n;++elem){
        for(i=elem;i<n;++i){
            if(A[i]<A[elem]){
                temp=A[elem];
                A[elem]=A[i];
                A[i]=temp;
            }
        }
    }
    return;
}

void imprimirorden(int n, int *A){
    int i;
    printf("\n\nLos numeros ordenados son: \n\n");
    for(i=0;i<n;++i)
        printf("i=%d x=%d\n",i+1,A[i]);
    return;
}
