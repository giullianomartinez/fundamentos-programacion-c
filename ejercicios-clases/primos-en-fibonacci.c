#include <stdio.h>

int esPrimo(long long int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    for (long long int i=3; i*i <=n; i+=2) {
        if (n % i == 0) {
            return 0;
        } 
    }
    return 1;
}


int main() {
    long long int num1 = 0, num2 = 1, resultado;
    int n, encontrados = 0;

    printf("Ingrese la cantidad de números primos de Fibonacci: ");
    scanf("%d", &n);

    while (encontrados < n) {
        resultado = num1 + num2;
        num1 = num2;
        num2 = resultado;

        if (esPrimo(resultado)) {
            printf("%lld ", resultado);
            encontrados++;
        }
    
        
    }

    return 0;
}
