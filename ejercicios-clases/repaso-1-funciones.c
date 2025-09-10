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

int main() {
    int dia, mes, anio, dias, horas, minutos;
    
    printf("Ingrese fecha en formato dia mes anio: ");
    scanf("%d %d %d", &dia, &mes, &anio);
    
    dias = calcularDias(dia, mes, anio);
    horas = dias * 24;
    minutos = horas * 60;
    printf("%d dias - %d horas - %d minutos",dias, horas, minutos);
    
    
    return 0;
}

int calcularDias(int dia, int mes, int anio) {
    int dias = (anio>0) ? 365*anio + dia : dia, extraBiciesto = anio/4;
    
    
    if (mes > 2) {
        for (int cont=1; cont<mes; cont++) {
            dias += 28;
        }
        switch (mes) {
            case 3:
                dias +=3;
                break;
            case 4:
                dias += 6;
                break;
            case 5:
                dias += 8;
                break;
            case 6: 
                dias += 11;
                break;
            case 7:
                dias += 13;
                break;
            case 8:
                dias += 16;
                break;
            case 9:
                dias += 19;
                break;
            case 10:
                dias += 21;
                break;
            case 11:
                dias += 24;
                break;
            case 12:
                dias += 26;
                break;
            default:
                break;
        }
    } 
    
    dias += extraBiciesto;
    return dias;
    
}
