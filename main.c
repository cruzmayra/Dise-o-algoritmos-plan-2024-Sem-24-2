#include <stdbool.h>
#include <stdio.h>

bool numberValidation(int number) {
    return number >= 3 && number <= 15;
};

int main() {
    int a, b, c;

    printf("Introduce tres numeros separados por espacios, por favor:\n");
    scanf("%d%d%d", &a, &b, &c);

    if(numberValidation(a) && numberValidation(b) && numberValidation(c)) {
        int numbersArray[] = {a, b, c};
        int limit = sizeof(numbersArray) / sizeof(numbersArray[0]);
        int i, j;
        for (i = 0; i < limit - 1; i++) {
            for (j = 0; j < (limit - i) - 1; j++) {
                if (numbersArray[j] < numbersArray[j + 1]) {
                    int temp = numbersArray[j];
                    numbersArray[j] = numbersArray[j + 1];
                    numbersArray[j + 1] = temp;
                }
            }
        }

        printf("\nEstos son los numeros ordenados! \n");

        for (int i = 0; i < limit; i++) {  
            printf("%d ", numbersArray[i]);  
        }

    } else {
        printf("\nPor favor, introduce numeros mayores a 3 y menores a 15.\n");
    }


    return 0;
}