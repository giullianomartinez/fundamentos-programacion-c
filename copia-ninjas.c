#include <stdio.h>
#include <string.h>
#include <math.h>

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

    printf("Ninja %49s \n", nombre);
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
    printf("%d % de los ninjas fueron promovidos a la jerarquía chünin\n", porcentaje);
    
  }
  
}
