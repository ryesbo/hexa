#include <stdio.h>

void main() 
{
    int decimalNumber;

    printf("Ingresa un número decimal: ");
    scanf_s("%i", &decimalNumber);

    printf("El número hexadecimal correspondiente es: %X\n", decimalNumber);
}

