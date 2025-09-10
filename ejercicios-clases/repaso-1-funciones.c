// calculadora
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

// Programa para calcular dias, horas y minutos transcurridos a partir de una fecha
#include <stdio.h>

long long int calcularDias(int dia, int mes, int anio);
int esBisiesto(int anio);

int main() {
    int dia, mes, anio;
    long long int dias, horas, minutos;
    
    printf("Ingrese fecha en formato dia mes anio: ");
    scanf("%d %d %d", &dia, &mes, &anio);
    
    dias = calcularDias(dia, mes, anio);
    horas = dias * 24;
    minutos = horas * 60;
    
    printf("%lld dias - %lld horas - %lld minutos\n", dias, horas, minutos);
    
    return 0;
}

// Función para verificar si un año es bisiesto
int esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

// Calcula los días totales desde el año 0 hasta la fecha dada
long long int calcularDias(int dia, int mes, int anio) {
    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    long long int totalDias = 0;

    // Sumar días por años completos
    for (int i = 0; i < anio; i++) {
        totalDias += esBisiesto(i) ? 366 : 365;
    }

    // Sumar días por meses completos en el año actual
    for (int i = 0; i < mes - 1; i++) {
        totalDias += diasPorMes[i];
        if (i == 1 && esBisiesto(anio)) {
            totalDias += 1; // Febrero bisiesto
        }
    }

    // Sumar los días del mes actual
    totalDias += dia;

    return totalDias;
}
