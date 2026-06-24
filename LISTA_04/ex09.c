#include <stdio.h>
#include <string.h>

int contar_vogais(const char s[])
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
         || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

int main(void)
{
    char texto[100];

    printf("Digite uma string: ");
    if (fgets(texto, sizeof(texto), stdin) == NULL) {
        return 1;
    }

    size_t len = strlen(texto);
    if (len > 0 && texto[len - 1] == '\n') {
        texto[len - 1] = '\0';
    }

    printf("A string contém %d vogais.\n", contar_vogais(texto));
    return 0;
}
