#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Uso: %s <palavra> e a <COR> dela em  seguida\n", argv[0]);
        return 1;
    }

    const char *cor = argv[argc - 1];
    const char *codigoCor;

    // Definir o código ANSI para a cor
    if (strcmp(cor, "VERMELHO") == 0) codigoCor = "\033[31m";
    else if (strcmp(cor, "AZUL") == 0) codigoCor = "\033[34m";
    else if (strcmp(cor, "VERDE") == 0) codigoCor = "\033[32m";
    else codigoCor = "\033[0m";


    
    printf("-------------\n| %s", codigoCor);
    for (int i = 1; i < argc - 1; i++) {
        printf("%s ", argv[i]);
    }
    printf("\033[0m|\n-------------\n");

    return 0;
}