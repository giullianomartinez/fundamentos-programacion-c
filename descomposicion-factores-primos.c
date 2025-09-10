#include <stdio.h>
int esPrimo(int n);

int main() {
    int n, divisor=2, first=1;
    printf("Ingrese numero: ");
    scanf("%d", &n);
    
    while (n>1) {
        if (esPrimo(divisor) && n%divisor == 0) {
            if (first) {
                printf("%d",divisor);
                first = 0;
            } else {
                printf(" x %d",divisor);
            }
            n /= divisor;
        } else {
            divisor++;
        }
    }
    
    return 0;
}

int esPrimo(int n) {
    if (n<=1) return 0;
    if (n==2) return 1;
    if (n%2==0) return 0;
    
    for (int i=3; i*i<=n; i+=2) {
        if (n%i==0) return 0;
    }
    return 1;
}
