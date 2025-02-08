#include <stdio.h>
#include <ctype.h>

long int convertTime(int n_horas, char tipo) {
    tipo = tolower(tipo); // Convert input to lowercase for simpler comparison

    switch (tipo) {
        case 'h': return n_horas;
        case 'm': return n_horas * 60;
        case 's': return n_horas * 3600;
        default: return -1; 
    }
}

int main() {
    int horas;
    char tipo;

    printf("Horas: ");
    scanf("%d", &horas);

    if (horas < 0) {
        printf("Erro: O número de horas não pode ser negativo.\n");
        return 1;
    }

    printf("(H - M - S): ");
    scanf(" %c", &tipo); 

    long int result = convertTime(horas, tipo);

    if (result == -1) {
        printf("Erro: Tipo inválido. Use H, M ou S.\n");
    } else {
        printf("Horas: %d\t--> %ld\n", horas, result);
    }

    return 0;
}
