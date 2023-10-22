#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero=0;
    while(numero<1000){
        if(numero%3==0)
        printf("%d\n", numero);
        numero++;
    }

}