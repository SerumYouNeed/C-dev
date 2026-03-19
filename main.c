#include <stdio.h>

int main()
{
    int integer;
    int integer2;
    float float2;
    char napis[] = "To jest napis";

    printf("Podaj liczbe calkowita: \n");
    scanf(" %d", &integer);

    printf("podaj kolejną: \n");
    scanf(" %d", &integer2);
    
    float wynik = integer / integer2;
    printf("wynik: %f\n", wynik);
}
