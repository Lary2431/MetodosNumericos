#include <stdio.h>
#include <stdlib.h>

int main(){
    int vector[4];
    int index[3];
    int vect[3];
    int arr[3];
    int arreglo[3];
    int i=0, x=0,y=0;
    int j=0,a,b,c;
    printf("A\t A+2\t A+4\t A+6\n");

    for(i=1;i<=4;i++){
        vector[i]=3*i;
        for(j=1;j<=1;j++){
            arreglo[j]=2*j;
            a=vector[i]+arreglo[j];
            for(x=1;x<=1;x++){
            index[x]=4*x;
            b=vector[i]+index[x];
                for(y=1;y<=1;y++){
                arr[y]=6*y;
                c=vector[i]+arr[y];      
        }

        }
         printf("%d\t %d\t %d\t %d\n", vector[i], a,b,c);
    }
       
    }   
}

