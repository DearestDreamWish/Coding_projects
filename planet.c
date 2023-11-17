#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct planet {
  char navn[30];
  double volume_km3;
  double masse_kg;
};
typedef struct planet planet;
double massefylden(double masse_kg, double volume_km3);

int main(void){
    planet planet;
    char navn[30];
    printf("Indtast navn paa planeten: ");
    scanf("%s", navn);
    strcpy(planet.navn, navn);
    printf("Indtast planetens volumen i km3: ");
    scanf("%lf", &planet.volume_km3);
    printf("Indtast planetens masse i kg: ");
    scanf("%lf", &planet.masse_kg);
    printf("Planetens navn er %s, dens volumen er %lf km3 og dens masse er %lf kg", planet.navn, planet.volume_km3, planet.masse_kg);
    printf("\n[+]Beregner massefylden.\n");
    double massefylde=massefylden(planet.masse_kg, planet.volume_km3);
    printf("Massefylden er %lf kg/km3", massefylde);
}

double massefylden(double masse_kg, double volume_km3){
    double massefylden = masse_kg/volume_km3;
    return massefylden;
}