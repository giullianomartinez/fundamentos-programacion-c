#include <stdio.h>
#include <math.h>

int main() {
    int num1 = 0, num2 = 1, resultado;
    int n, encontrados = 0;

    printf("Ingrese la cantidad de números primos en la sucesión de Fibonacci: ");
    scanf("%d", &n);

    while (encontrados < n) {
        resultado = num1 + num2;
        num1 = num2;
        num2 = resultado;

        // Verificar si el número es primo
        if (resultado == 2) {
            printf("%d\n", resultado);
            encontrados++;
        } else if (resultado > 2) {
            int primo = 1; // asumimos que es primo

            int tope = sqrt(resultado);
            for (int i = 2; i <= tope; i++) {
                if (resultado % i == 0) {
                    primo = 0; // no es primo
                    break;
                }
            }

            if (primo) {
                printf("%d\n", resultado);
                encontrados++;
            }
        }
    }

    return 0;
}
