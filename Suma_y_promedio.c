
#include <stdio.h>
int main()
{
    int numero[20] =            
      {1,2,3,4,5};
    int i,a, suma;

    double promedio;                
 
    suma = 0; 
    for (i=0; i<=4; i++){
        suma += numero[i];
    }
    printf("La suma es: %d\n", suma);
    promedio=suma/5;
    printf("El promedio es: %f\n", promedio);

int resp=1;
for(a=0;a<=4;a++){
    resp=resp*numero[a];
}
 printf("La multiplicacion es: %d",resp);
return 0;
}
 



 