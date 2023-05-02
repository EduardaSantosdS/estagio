#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    int length = strlen(str) - 1; // -1 para remover o caractere de nova linha
    for(int i=0; i<length/2; i++) {
        char temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }
    printf("A string invertida é: %s", str);
    return 0;
}
