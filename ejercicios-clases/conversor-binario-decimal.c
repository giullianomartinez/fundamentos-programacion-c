// EN DESARROLLO
// Este programa convierte un numero binario a decimal y viceversa

#include <stdio.h>

int binarioToDecimal(int n);
float decimalToBinario(float n);

int main() {
    int opcion;
    
    do {
        printf("Ingrese opcion. 1.(binario a decimal) 2.(decimal a binario): ");
        scanf("%d", &opcion);
    } while (opcion <1 || opcion>2);
    
    if (opcion==1) {
        int n;
        printf("\nIngrese numero: ");
        scanf("%d", &n);
        int resultado = binarioToDecimal(n);
    } else if (opcion == 2) {
        float n;
        printf("\nIngrese numero: ");
        scanf("%f", &n);
        float resultado = decimalToBinario(n);
    }
    
    
    return 0;
}

int binarioToDecimal(int n) {
    int digitos=0;
        while (n != 0) {
            int ultDig = n%10;
            digitos += 1;
            n/= 10;
        }
    
    
    
}
