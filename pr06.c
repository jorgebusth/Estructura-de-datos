//este programa sirve para generar matrices de manera
//dinámica utilizando punteros.
//260819
#include <stdio.h>
#include <stdlib.h>

main(){

    int i, **B, f, c, n, m;

    printf("introduzca el numero de filas de la matriz: ");
    scanf("%d", &n);
    printf("Introduce el numero de columnas de la matriz: ");
    scanf("%d", &m);
    B= (int **)malloc(sizeof(int *) * n);

    for(i=0; i<m; i++){
        B[i]=(int *)malloc(sizeof(int)* m);
    }
    for(f=0;f<n;f++){
        for(c=0;c<m;c++){
            printf("Dato [%d][%d]",f+1,c+1);
            scanf("%d", &B[f][c]);
        }
    }

    for(f=0;f<n;f++){
        for(c=0;c<m;c++){
            printf("%5d",B[f][c]);
        }
        printf("\n");
    }
    return 0;

}
