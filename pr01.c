#define MAX 10
#include <stdio.h>
#include <stdlib.h>

main(){

	int A[MAX], i, j, x, y, posicion, m, temp, pm;

	for(i=0;i<MAX;i++){
	
		printf(“Introduce el valor %d”,i+1);
		scanf(“%d”, & A[i]);
	}
	
	x=0, y=MAX-1;

	for(i=0;i<MAX-1;i++){
		
		if(i%2==0){
		posicion=x;
		}
		else
		posicion=y;

		m=A[x];

		for( pm=x, j=x; j<=y; j++){

		if(A[j]<A[x]){
				m=A[j];
				pm=j;
			}		
		}
	}
	
	
	temp=A[posicion];
	A[posicion]=A[pm];
	A[pm]=temp;
	
	if(posicion==x) 
		x++;
	else 
		y--;

	print(“\n El arreglo queda asi: \n”);

	for(i=0 ; i<MAX ; i++)

}
