int maximo (int a, int b);
int main(){
    int a;
    int b;
    int max;

    puts("Ingresa el primer numero");
    scanf("%d",&a );
    puts("Ingresa el segundo numero");
    scanf("%d",&b);
    max = maximo(a,b);
    printf("El numero mayor es: %d",max);
}

int maximo (int a, int b){
    int max;

   if(a>b){
    max=a;
   }else{
   max=b;
}
   return max;
}