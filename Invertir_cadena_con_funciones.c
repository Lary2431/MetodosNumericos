#include <stdio.h>
#include <string.h>

void reverse_string(char *str); //referencia a un apuntador

int main() {
char str[20];
char c;
int i = 0;

printf("Ingrese una cadena: ");
//while (c != ' ' && c != '\n') {
while (scanf("%c", &c) == 1 && c != ' ' && c != '\n') {
str[i] = c;
i++;
}
str[i] = '\0';

reverse_string(str);

printf("Cadena invertida: %s\n", str);

return 0;
}

void reverse_string(char *str) {
int i, j;
char temp;

for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
temp = str[i];
str[i] = str[j];
str[j] = temp;
}
}
