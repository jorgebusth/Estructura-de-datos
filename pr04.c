

//Programa de apuntadores.
#include<stdio.h>



int main()
 {//Abre main

int a, *ap,i, A[3]={1,2,3};

  printf("direccion a: %p",&a);
  printf("\ndireccion ap: %p",&ap);
  printf("\ndireccion A[]: %p",&A);
  ap=&a;
  a=20;
  printf("\ncontenido de a: %d",a);
  printf("\ncontenido ap:%p",ap);//Contenido de una direccion de memoria 
  printf("\ncontenido de a por ap: %d",*ap);//Contenido de apuntador 
  ap=A;
  printf("\ncontenido ap:%p",ap);
  *ap=5;
  for(i=0;i<3;i++)
    {
     printf("\nA[%d]= %d",i,*(ap+i));
     printf("\ndireccion ap: %p",ap+i);
    }
 
  for(i=0;i<5;i++)
     {
      printf("\nap[%d]= %d",i,ap[i]);
      
     }

  return 0;

  }//Cierre main

