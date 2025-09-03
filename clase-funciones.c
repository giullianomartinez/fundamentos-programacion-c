#include <stdio.h>

int main() {
    double num1, num2, resultado;
    char operacion[20];
    printf("Ingrese dos numeros separados por espacio: ");
    scanf("%lf %lf", &num1, &num2);

    printf("\nIngrese operacion a hacer (suma|resta|multiplicacion|division|conteo|resto): ");
    scanf("%s", operacion);

    calcularResultado(num1, num2);
    

    return 0;
}

float calcularResultado(double num1, double num2, char operacion) {
    switch (operacion) {
        case "suma":
            return num1 + num2;
        case "resta":
            return num1-num2;
        case "multiplicacion":
            return num1*num2;
        case "division":
            return num1/num2;
        case "conteo":
            return contarDigitos(num1, num2);
        case "resto":
            return num1 % num2;

        default:
            return("operacion incorrecta");
    }
}

void contarDigitos(int num1, int num2) {
    int dig1 = 0, dig2 = 0, ultDig;


    while (num1 != 0) {
        ultDig = num1 % 10;
        dig1 += ultDig;
        num1 /= 10;
    }

    while (num2 != 0) {
        ultDig = num2 % 10;
        dig2 += ultDig;
        num2 /= 10;
    }
    printf("%d tiene %d digitos", &num1, &dig1);
    printf("%d tiene %d digitos", &num2, &dig2);
}
