#include <stdio.h>
#include <stdlib.h>

int main(){
    char cad[]="Hola";
    int len,i,j;
    len=strlen(cad);
    printf("Cuadrado de asteriscos de %d\n",len);

    for(i=0; i<len; i++){
        for(j=0; j<len; j++){
        printf("*");
    }
    printf("\n");
      }
 
   
}