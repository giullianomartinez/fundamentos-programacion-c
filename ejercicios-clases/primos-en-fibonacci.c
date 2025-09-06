#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool esPrimo(int n)
{
    if (n == 2)
    {
        return true;
    }
    else if (n <= 1)
    {
        return false;
    }
    else
    {
        int tope = sqrt(n);

        for (int i = 2; i <= tope; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    bool hayPrimos = false;
    int num1 = 0, resultado = 0, num2 = 1, n;

    printf("Ingrese cant de sucesiones a iterar: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        resultado = num1 + num2;
        num1 = num2;
        num2 = resultado;

        if (esPrimo(resultado))
        {
            hayPrimos = true;
            printf("%d\n", resultado);
        }
    }

    if (!hayPrimos)
    {
        printf("No hay primos");
    }

    return 0;
}
