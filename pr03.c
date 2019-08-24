# define MAX 10
#include <stdio.h>

main(){

	int A[MAX], i, j, posicionMenor, temp, menor;

	for(i=0 ; i<MAX ; i++){
	
		printf("Introduzca el valor de %d: ", i+1);
		scanf("%d", &A[i]);
	}

	for(i=0 ;  i< MAX-1; i++){
		menor=A[i];
		posicionMenor=i;
		for(j=i+1; j<MAX; j++){
			if(A[j]<menor){
				menor=A[j];
				posicionMenor=j;
			}
		}
		temp=A[i];
		A[i]=A[posicionMenor];
		A[posicionMenor]=temp;
	}
	printf("\nEl arreglo queda asi; \n");
	for(i=0 ; i<MAX; i++){
	printf("%d \t", A[i]);
	}
	return 0;

}
