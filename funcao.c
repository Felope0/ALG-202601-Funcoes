#include <stdio.h>
#include <stdlib.h>

void calcularHMS(int segundos, int *horas, int *minutos, int *seg) {
    *horas   = segundos / 3600;
    *minutos = (segundos % 3600) / 60;
    *seg     = segundos % 60;
}

int isPar(int num) {
    return (num % 2 == 0);
}

int isImpar(int num) {
    return (num % 2 != 0);
}

float media(float a, float b) {
    return (a + b) / 2;
}

float maior(float a, float b) {
    if(a > b)
        return a;
    return b;
}

float menor(float a, float b) {
    if(a < b)
        return a;
    return b;

}


int main() {

    int segundos, h, m, s;
    printf("1) Digite um numero inteiro de segundos: ");
    scanf("%d", &segundos);

    calcularHMS(segundos, &h, &m, &s);
    printf("Equivale a: %d horas, %d minutos e %d segundos\n\n", h, m, s);

    int num;
    printf("2) Digite um numero inteiro: ");
    scanf("%d", &num);

    if(isPar(num))
        printf("Numero par\n\n");
    else
        printf("Numero impar\n\n");

    float a, b;
    printf("3) Digite dois numeros reais: ");
    scanf("%f %f", &a, &b);

    printf("Maior: %.2f\n", maior(a, b));
    printf("Menor: %.2f\n", menor(a, b));
    printf("Media: %.2f\n\n", media(a, b));

    system("pause");
    return 0;
}
