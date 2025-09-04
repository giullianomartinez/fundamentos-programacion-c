#include <stdio.h>

int main() {
    float num1, num2, resultado = 0;
    printf("Ingrese dos num separados por espacios: ");
    scanf("%f %f", &num1, &num2);

    int operacion;
    printf("\nIngrese operacion (1: suma, 2: resta, 3: multiplicacion, 4: division, 5: digitos, 6: resto): ");
    scanf("%d", &operacion);

    if (operacion > 0 && operacion != 5) {
        switch(operacion) {
            case 1:
                resultado = num1 + num2;
                break;
            case 2:
                resultado = num1-num2;
                break;
            case 3:
                resultado = num1*num2;
                break;
            case 4:
                resultado = num1/num2;
                break;
            case 6:
                resultado = num1%num2;
                break;
            default:
                printf("ingrese un numero entre los disponibles");
                break;
        }
        printf("Resultado: %f", resultado);
    } else if (operacion == 5) {
        int dig1 = 0, int dig2 = 0;
        dig1 = conteoDigitos(num1);
        dig2 = conteoDigitos(num2);

        printf("%d: %d digitos. %d: %d digitos", num1, dig1, num2, dig2);
    } else {
        print("Ingrese un numero entre los disponibles");
    }


    return 0;
}