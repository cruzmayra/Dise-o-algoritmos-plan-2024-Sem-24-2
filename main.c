#include <stdio.h>

int main() {
    int i;
    int number;
    int output;

    printf("Introduce un numero por favor: ");
    scanf("%i", &number);

    if(i <= 0) {
        printf("El numero debe ser mayor a cero. Ingresa un numero valido, por favor");
        return 0;
    }

    for (i = 1; i < number + 1; i++) {
        output = ((i * (i + 1)) * (i * 2 + 1)) / 6;
        printf("%d\n", output );

    }

    return 0;
}