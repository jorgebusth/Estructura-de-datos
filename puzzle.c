//Este programa sirve para acomodar los números en una matriz
//que si se muan las filas o columnas daran el mismo resultado

#include <stdio.h>
#include <stdlib.h>

main(){
    int n, **A, i, j, f, c;

    printf("Use numeros impares entre 3 y 17\n");

    do{
        printf("\nIngrese el tamano de la matriz: ");
        scanf("%d", &n);
    }while(n%2==0||n<3||n>17);

    A=(int **)malloc(sizeof(int *)*n);
    for(i=0;i<n;i++){
        A[i]=(int*)malloc(sizeof(int)*n);
    }


    //Determinamos el centro de la matríz
    f=c=n/2;
    i=1;
    A[f][c+1]=i;
    printf("\nEl centro está en A[%d][%d]\n",f,c);




    //Mostramos la matriz creada
     for(f=0;f<n;f++){
        for(c=0;c<n;c++){
            printf("%5d",A[f][c]);
        }
        printf("\n");
    }
}
