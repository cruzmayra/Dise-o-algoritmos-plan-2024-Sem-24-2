#include <stdio.h>

int main() {
    int day, month;

    printf("´\nIngresa tu dia de nacimiento: ");
    scanf("%d", &day);

    if((day >= 1) && (day > 31)) {
        printf("\nIngresa un dia de nacimiento valido, por favor");
        return 0;
    } else {
        printf("\nIngresa tu mes de nacimiento: ");
        scanf("%d", &month);

        if((month >= 1) && (month > 12)) {
            printf("\nIngresa un mes de nacimiento valido, por favor");
            return 0;
        } else {
            if((day >= 21 && month == 3) || (day <= 20 && month == 4)) {
                printf ("\n Tu signo zodiacal es Aries\n");
            }

            else if((day >= 21 && month == 4) || (day <= 21 && month == 5)) {
                printf ("\n Tu signo zodiacal es Tauro\n");
            }

            else if((day >= 22 && month ==5 ) || (day <= 21 && month == 6)) {
                printf ("\n Tu signo zodiacal es Geminis\n");
            }

            else if((day >= 21 && month == 6) || (day <= 23 && month==7)) {
                printf ("\n Tu signo zodiacal es Cancer\n");
            }

            else if((day >= 24 && month == 7) ||( day <= 23 && month == 8)) {
                printf ("\n Tu signo zodiacal es Leo\n");
            }

            else if((day >= 24 && month ==8) || (day <= 23 && month == 9)) {
                printf ("\n Tu signo zodiacal es Virgo\n");
            }

            else if((day >= 24 && month == 9) || ( day <= 23 && month == 10)) {
                printf ("\n Tu signo zodiacal es Libra\n");
            }

            else if(( day >= 24 && month == 10) || ( day <= 22 && month == 11)) {
                printf ("\n Tu signo zodiacal es Escorpio\n");
            }

            else if((day >= 23 && month == 11) || (day <= 21 && month == 12)) {
                printf ("\n Tu signo zodiacal es Sagitario\n");
            }

            else if(( day >= 22 && month == 12) || (day <= 20 && month == 1)) {
                printf ("\n Tu signo zodiacal es Capricornio\n");
            }

            else if(( day >= 21 && month == 1) || (day <= 19 && month == 2)) {
                printf ("\n Tu signo zodiacal es Acuario\n");
            }

            else if((day >= 20 && month == 2) || (day <= 20 && month == 3)) {
                printf ("\n Tu signo zodiacal es Piscis\n");
            }

            else {
                printf ("\n No pudimos calcular tu signo zodiacal </3\n");
            }
            return 0;
        } 
    }

}