// ejercicios estructuras iterativas

#include <stdio.h>
#include <string.h>

/* 1.- Diseñe y escriba un algoritmo que, dado un número entero positivo, escriba por pantalla
todos los números naturales desde uno hasta ese número.

int main()
{
    long int n;
    printf("Ingrese el num tope: ");
    scanf("%ld", &n);

    for (long int i = 1; i <= n; i++)
    {
        printf("%ld\n", i);
    }

    return 0;
}


 2.- Escriba un algoritmo que, al recibir dos números enteros, calcule el mínimo común
múltiplo.


int main() {
    long long int a, b, mcm = 0;
    
    do {
        printf("Ingrese dos numeros positivos: ");
        scanf("%lld %lld", &a, &b);
    } while (a <= 0 || b <= 0);

    
    long long int mcd = a, copiaB = b;
    
    while (copiaB != 0) {
        long long int temp = copiaB;
        copiaB = mcd % copiaB;
        mcd = temp;
    }
    mcm = (a * b) / mcd;
    
    printf("MCM: %lld", mcm);
    
    
    return 0;
}


 3.- Diseñe un algoritmo que reciba como entrada dos números, y haga una suma de
todos los enteros que van desde el primero al segundo. Ambos números pueden ser reales.

#include <stdio.h>

int main() {
    double a, b;
    
    do {
        printf("Ingrese dos numeros positivos: ");
        scanf("%lf %lf", &a, &b);
    } while (a <= 0 || b <= 0);
    
    double menor = (a < b) ? a : b;
    double mayor = (a > b) ? a : b;
    
    long long int inicio = (menor == (int)menor) ? (int)menor : ((int)menor + 1);
    long long int fin = (int)mayor, suma = 0;
    
    for (int i = inicio; i<= fin; i++) {
        suma += i;
    }
    printf("suma: %lld", suma);
    
    
    return 0;
} */


// 16.- Escriba un algoritmo que genere las primeras N líneas de un triangulo

int main()
{
    int n;
    printf("Ingrese cant filas: ");
    scanf("%d", &n);
    for (int fila = 1; fila <= n; fila++)
    {
        // espacios

        for (int esp = 1; esp <= n - fila; esp++)
        {
            printf("  ");
        }

        // primera mitad del triangulo

        for (int izq = fila; izq < fila * 2; izq++)
        {
            printf("%d ", izq);
        }

        // segunda mitad

        for (int der = fila * 2 - 2; der >= fila; der--)
        {
            printf("%d ", der);
        }

        printf("\n");
    }
    return 0;
}
