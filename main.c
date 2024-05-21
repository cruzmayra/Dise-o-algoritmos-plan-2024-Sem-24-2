#include <stdio.h>

int main() {
    static char *menuOptions[] = {"Combo Famous Star con Queso", "Combo Super Star con Queso", "Combo Western Bacon Cheeseburger", "Combo Double Western Bacon Cheeseburger"};
    int menuPrices[] = {149, 179, 169, 199};
    int combo, i;

    for (i = 0; i < 4; i++) {
        printf( "\n   %d. %s", i + 1, menuOptions[i]);
    }
    printf( "\n\n   Que combo deseas ordenar? [1-4]____");

    scanf( "%d", &combo);

    switch (combo) {
        case 1:
            printf( "\n   Elegiste el %s, tu total a pagar es $%d.00\n", menuOptions[combo - 1], menuPrices[combo - 1]);
            break;

        case 2:
            printf( "\n   Elegiste el %s, tu total a pagar es $%d.00\n", menuOptions[combo - 1], menuPrices[combo - 1]);
            break;

        case 3:
            printf( "\n   Elegiste el %s, tu total a pagar es $%d.00\n", menuOptions[combo - 1], menuPrices[combo - 1]);
            break;
        
        case 4:
            printf( "\n   Elegiste el %s, tu total a pagar es $%d.00\n", menuOptions[combo - 1], menuPrices[combo - 1]);
            break;
        default:
            printf("\n   No tenemos esa opcion en el menu :(\n");
    }

    return 0;
}