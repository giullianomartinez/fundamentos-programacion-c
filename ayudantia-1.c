#include <stdio.h>

/* lee numero entero y determina signo,ademas si es par o impar

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Numero es 0\n");
        printf("Numero es par\n");
    } else if (n < 0) {
        printf("Numero es negativo\n");
        if (n % 2 == 0) {
            printf("Numero es par");
        } else {
            printf("Numero es impar");
        }
    } else {
        printf("Numero es positivo\n");
        if (n % 2 == 0) {
            printf("Numero es par");
        } else {
            printf("Numero es impar");
        }
    }

    
    return 0;

}
*/



/* mostrar inverso de num positivo

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("\nNumero debe ser positivo\n");
    } else {
        int ultDigito = 0, inverso = 0;
        int copia = n;
        

        while (copia > 0) {
            ultDigito = copia % 10;
            inverso = inverso * 10 + ultDigito;
            copia /= 10;
        }
        printf("El inverso de %d es %d", n, inverso);


    }

    return 0;
}
*/

/* suma de una serie


int main() {
    int n;
    float suma = 0.0;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("\nDebe ser un numero positivo");
    } else {
        for (float i=1.0; i<=n; i++) {
            suma += 1/i;
        }
        printf("Resultado = %.4f", suma);


    }



    return 0;
}
*/

int main() {
    int n, sumaDivisores = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("\nDebe ser un numero positivo\n");
    } else {
        for (int i=1; i<n; i++) {
            if (n % i == 0) {
                sumaDivisores+= i;
            }
        }
        if (sumaDivisores < n) {
            printf("Num es deficiente\n");
        } else {
            printf("Num NO es deficiente\n");
        }

    }


    return 0;
}

