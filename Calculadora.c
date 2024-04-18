#include <stdio.h>
// comentario
int main()
{
    int a, b, res;
    printf("Bienvenido a la calculadora ༼ つ ◕_◕ ༽つ \n");
    printf("Ingrese un valor");
    scanf("%d", &a);
    printf("Ingrese otro valor");
    scanf("%d", &b);
    res = a + b;
    printf("La operacion es: \n");
    printf("%d + %d = %d\n", a, b, res);

    printf("Ingrese un valor");
    scanf("%d", &a);
    printf("Ingrese otro valor");
    scanf("%d", &b);
    res = a - b;
    printf("La operacion es: \n");
    printf("%d - %d = %d", a, b, res);

    printf("Ingrese un valor");
    scanf("%d", &a);
    printf("Ingrese otro valor");
    scanf("%d", &b);
    res = a * b;
    printf("La operacion es: \n");
    printf("%d * %d = %d", a, b, res);

    printf("Ingrese un valor");
    scanf("%d", &a);
    printf("Ingrese otro valor");
    scanf("%d", &b);
    res = a / b;
    printf("La operacion es: \n");
    printf("%d / %d = %d\n", a, b, res);
    return 0;
}