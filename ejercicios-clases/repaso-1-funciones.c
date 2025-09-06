#include <stdio.h>
#include <math.h>

int conteoDigitos(float n)
{
    int num = (int)fabs(n);
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return (int)log10(num) + 1;
    }
}

int main()
{
    float num1, num2, resultado = 0;
    printf("Ingrese dos num separados por espacios: ");
    scanf("%f %f", &num1, &num2);

    int operacion;
    printf("\nIngrese operacion (1: suma, 2: resta, 3: multiplicacion, 4: division, 5: digitos, 6: resto): ");
    scanf("%d", &operacion);

    if (operacion > 0 && operacion != 5)
    {
        switch (operacion)
        {
        case 1:
            resultado = num1 + num2;
            break;

        case 2:
            resultado = num1 - num2;
            break;

        case 3:
            resultado = num1 * num2;
            break;

        case 4:
            if (num2 == 0)
            {
                printf("ERROR: No puede dividir entre 0");
                return 1;
            }
            resultado = num1 / num2;
            break;

        case 6:
            if (num2 == 0)
            {
                printf("ERROR: modulo por 0");
                return 1;
            }
            resultado = fmod(num1, num2);
            break;
        default:
            printf("ingrese un numero entre los disponibles");
            return 1;
        }
        printf("Resultado: %.3f", resultado);
    }
    else if (operacion == 5)
    {
        int dig1 = conteoDigitos(num1);
        int dig2 = conteoDigitos(num2);

        printf("%.0f: %d digitos. %.0f: %d digitos", num1, dig1, num2, dig2);
    }
    else
    {
        printf("Ingrese un numero entre los disponibles");
    }

    return 0;
}