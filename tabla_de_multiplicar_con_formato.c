#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int m;
    int j;
    int i;
    printf("Ingresa un numero de m");
    scanf("%d",&m);

printf("Ingresa un numero de n");
    scanf("%d",&n);

    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            printf("%d\t", i*j);
        }
        printf("\n");
    }
    return 0;
}
   