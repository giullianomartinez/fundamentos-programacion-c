#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


int factorial(long int n) {
  int fact = 1;
  for (int i=2; i<n+1; i++) {
    fact*= i;
  }
  return fact;
}


int experiencia(int n) {
  double suma = 0.0;
  for (int k=0; k<n; k++) {
    double numerador = pow(2*k, 2*k+1);
    double denominador = factorial(k+1);
    suma+= numerador/denominador;
  }
  return (int)sqrt(suma);
}


int espiritu(int n) {
  int sumaDiv = 0;
  for (int i = 1; i < n+1; i++) {
    if (n % i == 0 && i % 2 == 1) {
      sumaDiv += i;
    }
  }
  return sumaDiv;
}


int chakra(int m, int n) {
  int numero = m * n;
  int sumaDigitosPares = 0;
  while (numero > 0) {
    int ultDigito = numero % 10;
    if (ultDigito % 2 == 0) {
      sumaDigitosPares += ultDigito;
    }
    numero//= 10;
  }
  return sumaDigitosPares;
}


bool contieneAl2(int n) {
  while (n > 0) {
    int ultDigito = n % 10;
    if (ultDigito == 2) {
      return true;
    }
    n//= 10;
  }
  return false;
}


float calcularPorcentaje(int parcial, int total) {
  if (total == 0) {
    return 0.0;
  } else {
    return ((float)parcial/total) * 100;
  }
}



int main() {
  int totalNinjas = 0, contadorPromovidos = 0, sumaIvs = 0;

  while (1) {
    char nombre[50];
    printf("Ingrese ninja : ");
    scanf("%49s", nombre);

    if (strcmp(nombre,"FIN") == 0) {
      break;
    }

    int mce, vsm, aef, nci;
    scanf("%d", &mce);
    scanf("%d", &vsm);
    scanf("%d", &aef);
    scanf("%d", &nci);
    
    int ivs = (experiencia(mce) + espiritu(vsm)) * chakra(aef,nci);
    sumaIvs += ivs;

    printf("Ninja: %s \n", nombre);
    printf("Indice de voluntad shinobi = %d\n", ivs);

    if (ivs > 5000 && contieneAl2(ivs)) {
      printf("*** PROMOVIDO A JERARQUIA CHUNNIN ***\n\n");
      contadorPromovidos++;
    }
    totalNinjas++;
  }
  printf("REPORTE FINAL\n============\nTotal de ninjas procesados = %d\n", totalNinjas);

  if (totalNinjas > 0) {
    int promedio = (int)sumaIvs/totalNinjas;
    float porcentaje = round(calcularPorcentaje(contadorPromovidos, totalNinjas));
    printf("\nPromedio IVS ninjas procesados = %d\n", promedio);
    printf("%.1f %% de los ninjas fueron promovidos a la jerarquía chünin\n", porcentaje);
    
  }
  return 0;
}
