// Desarrollo de ejercicios publicados en la guia de funciones

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
