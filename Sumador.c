#include<stdio.h>
#define p printf
#define s scanf
int main (void)
{
    float num1, num2, suma, resta, multiplicador, division;
    p("Ingrese un valor:");
    s("%f",&num1);
    p("Ingrese otro valor:");
    s("%f", &num2);
    suma = num1 + num2;
    p("%f + %f = %f", num1, num2, suma);

    p("Ingrese un valor:");
    s("%f",&num1);
    p("Ingrese otro valor:");
    s("%f", &num2);
    resta = num1 - num2;
    p("%f - %f = %f", num1, num2, resta);

    p("Ingrese un valor:");
    s("%f",&num1);
    p("Ingrese otro valor:");
    s("%f", &num2);
    multiplicador = num1 * num2;
    p("%f * %f = %f", num1, num2, multiplicador);
    
    p("Ingrese un valor:");
    s("%f",&num1);
    p("Ingrese otro valor:");
    s("%f", &num2);
    division = num1 / num2;
    p("%f / %f = %f", num1, num2, division);
    return 0;
}