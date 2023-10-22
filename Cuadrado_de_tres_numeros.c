#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero=1;
    int x;
    int y;

    while(numero<=500){
        x=numero*numero;
        y=numero*numero*numero;
        printf("%d, %d, %d\n", numero,x,y);
        numero++;
    }
    return 0;

}