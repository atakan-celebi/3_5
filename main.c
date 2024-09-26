#include <stdio.h>

int main(void) {
    float a=0;
    printf("inserisci il prezzo totale\n");
    scanf("%f", &a);
    if (a > 10 && a <= 50) {
        printf("importo non scontato e' %.2f: \n", a);
        a -= (a * 0.1);
        printf("importo scontato e' %.2f: \n", a);
    } else if (a > 50) {
        printf("importo non scontato e' %.2f: \n", a);
        a -= (a * 0.2);
        printf("importo scontato e' %.2f: \n", a);
    } else {
        printf("il prezzo e' troppo basso per essere scontato");
    }

}