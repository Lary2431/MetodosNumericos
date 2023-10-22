int main(){
int res;
char str1[100];
char str2[100];
printf("Ingresa una palabra: ");
scanf("%s",str1);
printf("Ingresa otra palabra: ");
scanf("%s",str2);
res = strcmp( str1, str2 );

if(res==0){
    printf("Ambas palabras son iguales");
}else if (res!=0 && res<0){
    printf("La primera palabra es mayor");
}else if(res>0){
    printf("La segunda palabra es mayor");
}

return 0;
}