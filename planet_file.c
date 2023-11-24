//Program to write planet data to a file
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define PI 3.14159

struct planet{
    char navn[30];
    double radius;
    double volumen;
    double masse;
};
typedef struct planet planet;

planet indlaes_planet(void);
void fprint_planet(FILE *f, planet p);

int main(void){
    planet p1 = {"Earth", 12756/2, 1.08e12, 5.97e24};
    planet p2 = {"Mars", 6792/2, 1.63e11, 6.42e23};
    
    FILE *f = fopen("fil.txt", "w");
    if (f == NULL){
        printf("Filen blev ikke aabnet.\n");
        exit(EXIT_FAILURE);

    }
    fprint_planet(f, p1);
    fprint_planet(f, p2);
    fprint_planet(f, indlaes_planet());
    fclose(f);
    return 0;
}

planet indlaes_planet(void){
    planet min_planet;
    printf("Her: %lf\n", 4.0/3.0);
    printf("Indtast et navn: \n");
    scanf("%s", min_planet.navn);
    printf("Indtast radius: \n");
    scanf("%lf", &(min_planet.radius));
    printf("Indtast masse: \n");
    scanf("%lf", &(min_planet.masse));
    min_planet.volumen =(4.0/3.0)*PI*pow(min_planet.radius,3);
    return min_planet;
}

void fprint_planet(FILE *f, planet p){
    fprintf(f, "Navn: %s\n", p.navn);
    fprintf(f, "Radius: %e\n", p.radius);    
    fprintf(f, "Masse: %e\n\n", p.masse);
}