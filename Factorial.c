
int main(void){
    int x;
    int numero;

    puts("Ingresa un numero");
    scanf("%d",&x);
    numero=factorial(x);

    printf("El factorial de %d es: %d",x,numero);
    return 0;
}

int factorial (int x){
    if (x==1){
        return 1;
    }else{
        return x * factorial (x-1);
    }

}