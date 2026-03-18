#include <stdio.h>

int main()
{
    int integer;
    float ulamek;
    char napis[] = "To jest napis";

    printf("To jest liczba: %d\n", integer);
    printf("To jest ułamek: %f\n", ulamek);
    printf("To jest ułamek z dokładnością: %.2f\n", ulamek);
    printf("To jest napis: %s\n", napis);


    integer = 5;
    integer = integer + 10;
    int integer2 = 4;
    int sum;
    sum = integer + integer2;
    printf("%d\n", sum);


    int test;
    int *testptr;
    testptr = &test;

    test = 255;
}
