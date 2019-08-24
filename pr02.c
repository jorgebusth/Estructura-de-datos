#define MAX 9
#include <stdio.h>

// este programa sirve para ordenar valores de un arreglo con tamaño determinado de menor a mayor 
// 19/08/19
main (){
	int A[MAX], i, j, t;
	
	for(i=0 ; i< MAX ; i++){
		printf("Introduce el valor %d: ",i+1);
		scanf("%d", &A[i]);
		}

	for(i=0 ; i<MAX ; i++){
		for(j=i+1 ; j<MAX ; j++){
			if (A[j]<A[i]){
				t=A[j];
				A[j]=A[i];
				A[i]=t;
				}

			}


		}

	for(i=0 ; i<MAX ; i++){
		printf("%d\t",A[i]);
		}

}
