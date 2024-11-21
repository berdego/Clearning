#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Erro: Nenhum número foi passado.\n");
        return 1;
    }

    int sum = 0;
    for (int i = 1; i < argc; i++) {
        // Verifica se todos os caracteres são dígitos
        for (char *p = argv[i]; *p != '\0'; p++) {
            if (!isdigit(*p)) {
                printf("Erro: '%s' não é um número válido.\n", argv[i]);
                return 2;
            }
        }
        sum += atoi(argv[i]);
    }

    printf("A soma dos números é: %d\n", sum);
    return 0;
}