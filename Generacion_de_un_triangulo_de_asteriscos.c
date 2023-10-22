#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y,z;
  printf("Ingresa un numero = " );
  scanf("%d",&x);
  for(y=0;y<=x;y++){
    for(z=0;z<y;z++){
        printf("*");
    }
    printf("\n");
  }

  
}