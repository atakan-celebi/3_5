#include <stdio.h>

int main(void) {
    float a;
    printf("inserisci il prezzo totale");
    scanf("%f", &a);
    if (a > 10) {
        printf("importo non scontato e' %f \n:", a);
        a = a-(a*0.2);
        printf("importo scontato e' %f: \n", a);
    } else if ("a > 50") {
        printf("importo non scontato e' %f:\n", a);
        a = a-(a*0.1);
        printf("importo scontato e' %f:\n", a);
    } else {
        printf("il prezzo e' troppo basso per essere scontato");
    }

}