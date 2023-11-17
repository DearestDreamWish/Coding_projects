#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct planet {
  char navn[30];
  double radius_km;
  double volume_km3;
  double masse_kg;
};
typedef struct planet planet;
double volumen(double radius_km);

int main(void){
    planet planet;
    char navn[30];
    printf("Indtast navn paa planeten: ");
    scanf("%s", navn);
    strcpy(planet.navn, navn);
    printf("Indtast planetens radius i km: ");
    scanf("%lf", &planet.radius_km);
    printf("Indtast planetens masse i kg: ");
    scanf("%lf", &planet.masse_kg);
    printf("Planetens navn er %s, radius er %lf og dens masse er %lf kg", planet.navn, planet.radius_km, planet.masse_kg);
    printf("\n[+]Beregner volumen.\n");
    double volume=volumen(planet.radius_km);
    printf("Volumen er %lf km3", volume);
    //Jorden.   radius: 6371 km.    masse: 5.972E24 kg.    volumen: 1.08321E12 km3.    massefylden: 5.515 kg/km3.
}

double volumen(double radius_km){
    double volume_km3 = (4/3)*M_PI*pow(radius_km, 3);
    return volume_km3;
}