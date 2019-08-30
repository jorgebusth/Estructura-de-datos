#include <stdio.h>
#include <stdlib.h>

main(){

    int i, **A, **B, **AB,f, c, n, m, p, acumulado;

    printf("introduzca el numero de filas de la matriz A: ");
    scanf("%d", &n);
    printf("Introduce el numero de columnas de la matriz A: ");
    scanf("%d", &m);
    A= (int **)malloc(sizeof(int *) * n);

    for(i=0; i<n; i++){
        A[i]=(int *)malloc(sizeof(int)* m);
    }


    for(f=0;f<n;f++){
        for(c=0;c<m;c++){
            printf("Dato A[%d][%d]: ",f,c);
            scanf("%d", &A[f][c]);
        }
    }
    printf("\nMatriz A\n");
    for(f=0;f<n;f++){
        for(c=0;c<m;c++){
            printf("%5d",A[f][c]);
        }
        printf("\n");
    }

     //printf("\n Introduzca el numero de filas de la matriz B: ");
    //scanf("%d", &n);
    printf("\n Introduce el numero de columnas de la matriz B: ");
    scanf("%d", &p);
    B= (int **)malloc(sizeof(int *) * m);

    for(i=0; i<m; i++){
        B[i]=(int *)malloc(sizeof(int)* p);
    }
    for(f=0;f<m;f++){
        for(c=0;c<p;c++){
            printf("Dato B[%d][%d]: ",f,c);
            scanf("%d", &B[f][c]);
        }
    }

    printf("\nMatriz B:\n");
    for(f=0;f<m;f++){
        for(c=0;c<p;c++){
            printf("%5d",B[f][c]);
        }
        printf("\n");
    }

    printf("\n El producto de las matrices AB es:\n");

//Se crea la matriz AB
    AB=(int **) malloc(sizeof(int *)*n);
    for(i=0;i<n;i++){
        AB[i]=(int *)malloc(sizeof(int)*p);
    }

    //se realiza la operación deseada

    for(f=0;f<n;f++){
        for(c=0;c<p;c++){
            for(acumulado=0,i=0;i<m;i++){
                acumulado=acumulado+A[f][i]*B[i][c];
            }
            AB[f][c]=acumulado;
        }
    }

    for(f=0;f<n;f++){
        for(c=0;c<p;c++){
            printf("%5d",AB[f][c]);
        }
        printf("\n");
    }



    return 0;

}
