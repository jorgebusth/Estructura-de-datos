/*Reordena un arreglo de enteros de menor a mayor */

#include <stdio.h>
#include <stdlib.h>
#define TAM 50

void reordenar(int n, int x[]); //prototipo de la función

main(){

    int i, n, x[TAM];

    //lee la dimensión de n
    printf("Cuantos numeros seran introducidos: ");
    scanf("%d",&n);
    printf("\n");

    //lee la lista de números
    for(i=0;i<n;++i)
    {
        printf("i=%d x= ",i+1);
        scanf("%d",&x[i]);
    }

    //se invoca la funcion reordenar
    reordenar(n,x);

    //se muestra el arreglo ordenao
    printf("\n\nLos numeros ordenados son:\n\n");
    for(i=0;i<n;++i)
        printf("i=%d x=%d\n", i+1, x[i]);
}

//se define la función reordenar
void reordenar(int n, int x[])
{
    int i, elem, temp;

    for(elem=0;elem<n-1;++elem)
        //se encuentra el numero menor
        for(i=elem+1;i<n-1;++i){
            temp=x[elem];
            x[elem]=x[i];
            x[i]=temp;
        }
    return;

}
