#include <stdio.h>

int factorial(int n);

int main() {
    int n;
    printf("Ingrese cant. de filas: ");
    scanf("%d",&n);
    
    for (int filas=0; filas<=n; filas++) {
        for (int esp=1; esp<=n-filas; esp++) {
            printf(" ");
        }
        
        for (int rep=0; rep<=filas; rep++) {
            int num= factorial(filas) / (factorial(filas-rep) * factorial(rep));
            printf("%d ",num);
            
        }
        printf("\n");
    }
    
    
    return 0;
}

int factorial(int n) {
    int fact = 1;
    
    for (int i=2; i<=n; i++) {
        fact*= i;
    }
    return fact;
}

