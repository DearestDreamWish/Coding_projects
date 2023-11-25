/*
Kadel Saleh.
Cyber- og computer teknologi.
ksaleh22@student.aau.dk

yatzy.c er et program, der simulerer spillet Yatzy. Programmet er skrevet i C og anvender standard C biblioteket.
Dette program følger top-down programmeringsmetoden ved først at præsentere hovedfunktionaliteten i main(),
efterfulgt af hjælpefunktioner, der bryder programmet ned i mindre, håndterbare dele.
Kommentarerne er nu også mere detaljerede, så man nemt kan følge programmets logik.
Der anvendes pointer variabler og pointer argumenter.
Programmet er skrevet i en modulær stil, hvor forskellige funktionaliteter er pakket i særskilte funktioner. Dette gør koden nemmere at vedligeholde, forstå og udvide.
Inspireret af: chatGPT.
*/
#include <stdio.h>
#include <stdlib.h>


// prototyper af funktioner
int roll_multiple_dice(); // funktion til at kaste terningerne

int main(){  

    printf("\nVelkommen til Yatzy!\n"); // velkomstbesked   
    int antal_af_terninger=0; // variabel til antal af terninger
    while(antal_af_terninger<=4){    // while loop til at indlæse terningerne
        start: // label til at genstarte programmet
        printf("\nHvor mange terninger vil du spille med? Minimum 5 terninger.\t"); // spørger brugeren om antal af terninger
        scanf("%d",&antal_af_terninger); // funktion til at indlæse terningerne
    }   
    int terninger[antal_af_terninger];// array til terningerne
    printf("Du har valgt at spille med %d terninger.\n", antal_af_terninger); // udskriver antal af terninger
    printf("Scoreboard:\n"); // udskriver scoreboard

    printf("\n1. runde:\n"); //første runde
    int count1 = 0; // variabel til at tælle antal af 1'ere
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        terninger[i] = roll_multiple_dice(); // funktion til at kaste terningerne
        printf("%d ", terninger[i]); // udskriver terningerne
        if(terninger[i] == 1){ // if statement til at tælle antal af 1'ere
            count1++; // tæller antal af 1'ere
        }  
    }
    printf("\nAntal 1'ere: %d\n", count1); // udskriver antal af 1'ere
    int count1_sum=0; // variabel til at beregne summen af 1'ere
    for(int i=0;i<count1;i++){
        count1_sum+=1; // beregner summen af 1'ere
        if(i==4){
            break;
        }
    }
    printf("Summen af 1'ere: %d\n", count1_sum); // udskriver summen af 1'ere


    printf("\n2. runde:\n"); // anden runde
    int count2 = 0; // variabel til at tælle antal af 2'ere
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        terninger[i] = roll_multiple_dice(); // funktion til at kaste terningerne
        printf("%d ", terninger[i]); // udskriver terningerne
        if(terninger[i] == 2){ // if statement til at tælle antal af 2'ere
            count2++; // tæller antal af 2'ere
        }  
    }
    printf("\nAntal 2'ere: %d\n", count2); // udskriver antal af 2'ere
    int count2_sum=0; // variabel til at beregne summen af 2'ere
    for(int i=0;i<count2;i++){
        count2_sum+=2; // beregner summen af 2'ere
        if(i==4){
            break;
        }
    }
    printf("Summen af 2'ere: %d\n", count2_sum); // udskriver summen af 2'ere

    printf("\n3. runde:\n"); // tredje runde
    int count3 = 0; // variabel til at tælle antal af 3'ere
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        terninger[i] = roll_multiple_dice(); // funktion til at kaste terningerne
        printf("%d ", terninger[i]); // udskriver terningerne
        if(terninger[i] == 3){ // if statement til at tælle antal af 3'ere
            count3++; // tæller antal af 3'ere
        }  
    }
    printf("\nAntal 3'ere: %d\n", count3); // udskriver antal af 3'ere
    int count3_sum=0; // variabel til at beregne summen af 3'ere
    for(int i=0;i<count3;i++){
        count3_sum+=3; // beregner summen af 3'ere
        if(i==4){
            break;
        }
    }
    printf("Summen af 3'ere: %d\n", count3_sum); // udskriver summen af 3'ere


    printf("\n4. runde:\n"); // fjerde runde
    int count4 = 0; // variabel til at tælle antal af 4'ere
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        terninger[i] = roll_multiple_dice(); // funktion til at kaste terningerne
        printf("%d ", terninger[i]); // udskriver terningerne
        if(terninger[i] == 4){ // if statement til at tælle antal af 4'ere
            count4++; // tæller antal af 4'ere
        }  
    }
    printf("\nAntal 4'ere: %d\n", count4); // udskriver antal af 4'ere
    int count4_sum=0; // variabel til at beregne summen af 4'ere
    for(int i=0;i<count4;i++){
        count4_sum+=4; // beregner summen af 4'ere
        if(i==4){
            break;
        }
    }
    printf("Summen af 4'ere: %d\n", count4_sum); // udskriver summen af 4'ere


    printf("\n5. runde:\n"); // femte runde
    int count5 = 0; // variabel til at tælle antal af 5'ere
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        terninger[i] = roll_multiple_dice(); // funktion til at kaste terningerne
        printf("%d ", terninger[i]); // udskriver terningerne
        if(terninger[i] == 5){ // if statement til at tælle antal af 5'ere
            count5++; // tæller antal af 5'ere
        }  
    }
    printf("\nAntal 5'ere: %d\n", count5); // udskriver antal af 5'ere
    int count5_sum=0; // variabel til at beregne summen af 5'ere
    for(int i=0;i<count5;i++){
        count5_sum+=5; // beregner summen af 5'ere
        if(i==4){
            break;
        }
    }
    printf("Summen af 5'ere: %d\n", count5_sum); // udskriver summen af 5'ere


    printf("\n6. runde:\n"); // sjette runde
    int count6 = 0; // variabel til at tælle antal af 6'ere
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        terninger[i] = roll_multiple_dice(); // funktion til at kaste terningerne
        printf("%d ", terninger[i]); // udskriver terningerne
        if(terninger[i] == 6){ // if statement til at tælle antal af 6'ere
            count6++; // tæller antal af 6'ere
        }  
    }
    printf("\nAntal 6'ere: %d\n", count6); // udskriver antal af 6'ere
    int count6_sum=0; // variabel til at beregne summen af 6'ere
    for(int i=0;i<count6;i++){
        count6_sum+=6; // beregner summen af 6'ere
        if(i==4){
            break;
        }
    }
    printf("Summen af 6'ere: %d\n", count6_sum); // udskriver summen af 6'ere

    int sum=count1_sum+count2_sum+count3_sum+count4_sum+count5_sum+count6_sum; // variabel til at beregne summen af alle terningerne
    int bonus=0; // variabel til at beregne bonus
    printf("\nSummen af alle terningerne: %d\n", sum); // udskriver summen af alle terningerne
    if(sum>62){
        printf("Bonus: 50.\n"); // udskriver bonus
        bonus=50;
    }
    else{
        printf("Bonus: 0.\n"); // udskriver bonus
        bonus=0;
    }


    printf("\n7. runde:\n"); // syvende runde
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        terninger[i] = roll_multiple_dice(); // funktion til at kaste terningerne
        printf("%d ", terninger[i]); // udskriver terningerne  
    }
    int i, j; // variabler til at tælle antal af et par.
    int gem_par=0; // variabel til at gemme par.
    for (i = 0;i<antal_af_terninger; i++)
    {
        for (j = i+1;j<antal_af_terninger; j++)
        {   
            if (terninger[i] == terninger[j])
            {
                switch (terninger[i])
                {
                case 1:
                    if(gem_par<1){
                        gem_par = 1;
                        break;
                    }
                    else{
                        break;
                    }
                case 2:
                    if(gem_par<2){
                        gem_par = 2;
                        break;
                    }
                    else{
                        break;
                    }
                case 3:
                    if(gem_par<3){
                        gem_par = 3;
                        break;
                    }
                    else{
                        break;
                    }
                case 4:
                    if(gem_par<4){
                        gem_par = 4;
                        break;
                    }
                    else{
                        break;
                    }
                case 5:
                    if(gem_par<5){
                        gem_par = 5;
                        break;
                    }
                    else{
                        break;
                    }	
                case 6:
                    if(gem_par<6){
                        gem_par = 6;
                        break;
                    }
                    else{
                        break;
                    }
                default:
                    break;
                }
            }
        }
    }
    printf("\nPar: %d\nSum:%d\n", gem_par,gem_par*2); // udskriver antal af et par.


    printf("\n8. runde:\n"); // ottende runde
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        terninger[i] = roll_multiple_dice(); // funktion til at kaste terningerne
        printf("%d ", terninger[i]); // udskriver terningerne  
    }
    int gem_par_2=0; // variabel til at gemme par.
    gem_par=0; // variabel til at gemme par.
    for (i = 0;i<antal_af_terninger; i++)
    {
        for (j = i+1;j<antal_af_terninger; j++)
        {   
            if (terninger[i] == terninger[j])
            {
                switch (terninger[i])
                {
                case 1:
                    if (gem_par < 1) {
                        gem_par = 1;
                    } else if (gem_par_2 < 1) {
                        gem_par_2 = 1;
                    }
                    break;
                case 2:
                    if (gem_par < 2) {
                        gem_par = 2;
                    } else if (gem_par_2 < 2) {
                        gem_par_2 = 2;
                    }
                    break;
                case 3:
                    if (gem_par < 3) {
                        gem_par = 3;
                    } else if (gem_par_2 < 3) {
                        gem_par_2 = 3;
                    }
                    break;
                case 4:
                    if (gem_par < 4) {
                        gem_par = 4;
                    } else if (gem_par_2 < 4) {
                        gem_par_2 = 4;
                    }
                    break;
                case 5:
                    if (gem_par < 5) {
                        gem_par = 5;
                    } else if (gem_par_2 < 5) {
                        gem_par_2 = 5;
                    }
                    break;
                case 6:
                    if (gem_par < 6) {
                        gem_par = 6;
                    } else if (gem_par_2 < 6) {
                        gem_par_2 = 6;
                    }
                    break;
                default:
                    break;
                }
            }
        }
    }
    printf("\nPar: %d \nPar: %d\n", gem_par,gem_par_2); // udskriver antal af et par.
    printf("Summen af begge par: %d\n", gem_par+gem_par+gem_par_2+gem_par_2); // udskriver summen af 2 par.



    printf("\n9. runde:\n"); // niende runde
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        terninger[i] = roll_multiple_dice(); // funktion til at kaste terningerne
        printf("%d ", terninger[i]); // udskriver terningerne  
    }
    int virker=0; // variabel til at tjekke om der er 3 ens
    int count3_1 = 0; // variabel til at tælle antal af 3 ens
    int count3_2 = 0; // variabel til at tælle antal af 3 ens
    int count3_3 = 0; // variabel til at tælle antal af 3 ens
    int count3_4 = 0; // variabel til at tælle antal af 3 ens
    int count3_5 = 0; // variabel til at tælle antal af 3 ens
    int count3_6 = 0; // variabel til at tælle antal af 3 ens
    int tre_ens_sum=0;
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        if(terninger[i] == 1){ // if statement til at tælle antal af 1'ere
            count3_1++; // tæller antal af 1'ere
        }
        if(terninger[i] == 2){ // if statement til at tælle antal af 2'ere
            count3_2++; // tæller antal af 2'ere
        }
        if(terninger[i] == 3){ // if statement til at tælle antal af 3'ere
            count3_3++; // tæller antal af 3'ere
        }
        if(terninger[i] == 4){ // if statement til at tælle antal af 4'ere
            count3_4++; // tæller antal af 4'ere
        }
        if(terninger[i] == 5){ // if statement til at tælle antal af 5'ere
            count3_5++; // tæller antal af 5'ere
        }
        if(terninger[i] == 6){ // if statement til at tælle antal af 6'ere
            count3_6++; // tæller antal af 6'ere
        }
    }
    if(count3_6>2){
            virker=1;
            tre_ens_sum=18;
            printf("\nSummen af bedste 3 ens: %d\n", tre_ens_sum); // udskriver summen af 3 ens
        }
        else if (count3_5>2)
        {
            virker=1;
            tre_ens_sum=15;
            printf("\nSummen af bedste 3 ens: %d\n", tre_ens_sum); // udskriver summen af 3 ens
        }
        else if (count3_4>2)
        {
            tre_ens_sum=12;
            printf("\nSummen af bedste 3 ens: %d\n", tre_ens_sum); // udskriver summen af 3 ens
            virker=1;

        }
        else if (count3_3>2)
        {
            virker=1;
            tre_ens_sum=9;
            printf("\nSummen af bedste 3 ens: %d\n", tre_ens_sum); // udskriver summen af 3 ens
         
        }
        else if (count3_2>2)
        {
            virker=1;
            tre_ens_sum=6;
            printf("\nSummen af bedste 3 ens: %d\n", tre_ens_sum); // udskriver summen af 3 ens

        }
        else if (count3_1>2)
        {
            virker=1;
            tre_ens_sum=3;
            printf("\nSummen af bedste 3 ens: %d\n", tre_ens_sum); // udskriver summen af 3 ens

        }
    if(virker==0){
        printf("\nAntal af 3 ens: 0\n"); // udskriver antal af 3 ens
        tre_ens_sum=0;
    }


    printf("\n10. runde:\n"); // tiende runde
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        terninger[i] = roll_multiple_dice(); // funktion til at kaste terningerne
        printf("%d ", terninger[i]); // udskriver terningerne  
    }
    int virker_2=0; // variabel til at tjekke om der er 4 ens
    int count4_1 = 0; // variabel til at tælle antal af 4 ens
    int count4_2 = 0; // variabel til at tælle antal af 4 ens
    int count4_3 = 0; // variabel til at tælle antal af 4 ens
    int count4_4 = 0; // variabel til at tælle antal af 4 ens
    int count4_5 = 0; // variabel til at tælle antal af 4 ens
    int count4_6 = 0; // variabel til at tælle antal af 4 ens
    int fire_ens_sum=0;
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        if(terninger[i] == 1){ // if statement til at tælle antal af 1'ere
            count4_1++; // tæller antal af 1'ere
        }
        if(terninger[i] == 2){ // if statement til at tælle antal af 2'ere
            count4_2++; // tæller antal af 2'ere
        }
        if(terninger[i] == 3){ // if statement til at tælle antal af 3'ere
            count4_3++; // tæller antal af 3'ere
        }
        if(terninger[i] == 4){ // if statement til at tælle antal af 4'ere
            count4_4++; // tæller antal af 4'ere
        }
        if(terninger[i] == 5){ // if statement til at tælle antal af 5'ere
            count4_5++; // tæller antal af 5'ere
        }
        if(terninger[i] == 6){ // if statement til at tælle antal af 6'ere
            count4_6++; // tæller antal af 6'ere
        }
        if(count4_6==4){
            printf("Summen af bedste 4 ens: %d\n", count3_6*4); // udskriver summen af 4 ens
            virker_2=1;
            fire_ens_sum=24;
        }
        else if (count4_5==4)
        {
            printf("Summen af bedste 4 ens: %d\n", count3_5*4); // udskriver summen af 4 ens
            virker_2=1;
            fire_ens_sum=20;
        }
        else if (count4_4==4)
        {
            printf("Summen af bedste 4 ens: %d\n", count3_4*4); // udskriver summen af 4 ens
            virker_2=1;
            fire_ens_sum=16;

        }
        else if (count4_3==4)
        {
            printf("Summen af bedste 4 ens: %d\n", count3_3*4); // udskriver summen af 4 ens
            virker_2=1;
            fire_ens_sum=12;
        }
        else if (count4_2==4)
        {
            printf("Summen af bedste 4 ens: %d\n", count3_2*4); // udskriver summen af 4 ens
            virker_2=1;
            fire_ens_sum=8;
        }
        else if (count4_1==4)
        {
            printf("Summen af bedste 4 ens: %d\n", count3_1*4); // udskriver summen af 4 ens
            virker_2=1;
            fire_ens_sum=4;
        }
        
    }
    if(virker_2==0){
        printf("\nAntal af 4 ens: 0\n"); // udskriver antal af 4 ens
        fire_ens_sum=0;
    }


    printf("\n11. runde:\n"); // ellevte runde
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        terninger[i] = roll_multiple_dice(); // funktion til at kaste terningerne
        printf("%d ", terninger[i]); // udskriver terningerne  
    }
    int count5_1 = 0; // variabel til at tælle antal af 3 ens
    int count5_2 = 0; // variabel til at tælle antal af 3 ens
    int count5_3 = 0; // variabel til at tælle antal af 3 ens
    int count5_4 = 0; // variabel til at tælle antal af 3 ens
    int count5_5 = 0; // variabel til at tælle antal af 3 ens
    int count5_6 = 0; // variabel til at tælle antal af 3 ens
    int lille_sum=0;
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        if(terninger[i] == 1){ // if statement til at tælle antal af 1'ere
            count5_1++; // tæller antal af 1'ere
        }
        if(terninger[i] == 2){ // if statement til at tælle antal af 2'ere
            count5_2++; // tæller antal af 2'ere
        }
        if(terninger[i] == 3){ // if statement til at tælle antal af 3'ere
            count5_3++; // tæller antal af 3'ere
        }
        if(terninger[i] == 4){ // if statement til at tælle antal af 4'ere
            count5_4++; // tæller antal af 4'ere
        }
        if(terninger[i] == 5){ // if statement til at tælle antal af 5'ere
            count5_5++; // tæller antal af 5'ere
        }
        if(terninger[i] == 6){ // if statement til at tælle antal af 6'ere
            count5_6++; // tæller antal af 6'ere
        }
    }
    if(count5_1>0 && count5_2>0 && count5_3>0 && count5_4>0 && count5_5>0){
        printf("Summen af lille: 15\n"); // udskriver summen af lille 
        lille_sum=15;
    }
    else{
        lille_sum=0;
        printf("\nAntal af lille: 0\n"); // udskriver antal af lille 
    }


    printf("\n12. runde:\n"); // tolvte runde
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        terninger[i] = roll_multiple_dice(); // funktion til at kaste terningerne
        printf("%d ", terninger[i]); // udskriver terningerne  
    }
    int count6_1 = 0; // variabel til at tælle antal af 3 ens
    int count6_2 = 0; // variabel til at tælle antal af 3 ens
    int count6_3 = 0; // variabel til at tælle antal af 3 ens
    int count6_4 = 0; // variabel til at tælle antal af 3 ens
    int count6_5 = 0; // variabel til at tælle antal af 3 ens
    int count6_6 = 0; // variabel til at tælle antal af 3 ens
    int stor_sum=0;
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        if(terninger[i] == 1){ // if statement til at tælle antal af 1'ere
            count6_1++; // tæller antal af 1'ere
        }
        if(terninger[i] == 2){ // if statement til at tælle antal af 2'ere
            count6_2++; // tæller antal af 2'ere
        }
        if(terninger[i] == 3){ // if statement til at tælle antal af 3'ere
            count6_3++; // tæller antal af 3'ere
        }
        if(terninger[i] == 4){ // if statement til at tælle antal af 4'ere
            count6_4++; // tæller antal af 4'ere
        }
        if(terninger[i] == 5){ // if statement til at tælle antal af 5'ere
            count6_5++; // tæller antal af 5'ere
        }
        if(terninger[i] == 6){ // if statement til at tælle antal af 6'ere
            count6_6++; // tæller antal af 6'ere
        }
    }
    if(count5_2>0 && count5_3>0 && count5_4>0 && count5_5>0 && count5_6>0){
        printf("Summen af stor: 20\n"); // udskriver summen af stor
        stor_sum=20;
    } else{
        stor_sum=0;
        printf("\nAntal af stor: 0\n"); // udskriver antal af stor
    }
    

    printf("\n13. runde:\n"); // trettende runde
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        terninger[i] = roll_multiple_dice(); // funktion til at kaste terningerne
        printf("%d ", terninger[i]); // udskriver terningerne  
    }
    int count7_1 = 0;
    int count7_2 = 0;
    int count7_3 = 0;
    int count7_4 = 0;
    int count7_5 = 0;
    int count7_6 = 0;
    int fuld_hus_sum=0;
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        if(terninger[i] == 1){ // if statement til at tælle antal af 1'ere
            count7_1++; // tæller antal af 1'ere
        }
        if(terninger[i] == 2){ // if statement til at tælle antal af 2'ere
            count7_2++; // tæller antal af 2'ere
        }
        if(terninger[i] == 3){ // if statement til at tælle antal af 3'ere
            count7_3++; // tæller antal af 3'ere
        }
        if(terninger[i] == 4){ // if statement til at tælle antal af 4'ere
            count7_4++; // tæller antal af 4'ere
        }
        if(terninger[i] == 5){ // if statement til at tælle antal af 5'ere
            count7_5++; // tæller antal af 5'ere
        }
        if(terninger[i] == 6){ // if statement til at tælle antal af 6'ere
            count7_6++; // tæller antal af 6'ere
        }
    }
    if(count7_6>2 && count7_5>1){
        printf("Summen af fuld hus: 28\n"); // udskriver summen af fuld hus
        fuld_hus_sum=28;
    }
    else if (count7_5>2 && count7_6>1)
    {
        printf("Summen af fuld hus: 27\n"); // udskriver summen af fuld hus
        fuld_hus_sum=27;
    }
    else if (count7_6>2 && count7_4>1)
    {
        printf("Summen af fuld hus: 26\n"); // udskriver summen af fuld hus
        fuld_hus_sum=26;
    }
    else if (count7_6>2 && count7_3>1)
    {
        printf("Summen af fuld hus: 24\n"); // udskriver summen af fuld hus
        fuld_hus_sum=24;
    }
    else if (count7_4>2 && count7_6>1)
    {
        printf("Summen af fuld hus: 24\n"); // udskriver summen af fuld hus
        fuld_hus_sum=24;
    }
    else if (count7_5>2 && count7_4>1)
    {
        printf("Summen af fuld hus: 23\n"); // udskriver summen af fuld hus
        fuld_hus_sum=23;
    }
    else if (count7_6>2 && count7_2>1)
    {
        printf("Summen af fuld hus: 22\n"); // udskriver summen af fuld hus
        fuld_hus_sum=22;
    }
    else if(count7_4>2 && count7_5>1)
    {
        printf("Summen af fuld hus: 22\n"); // udskriver summen af fuld hus
        fuld_hus_sum=22;
    }
    else if (count7_5>2 && count7_3>1)
    {
        printf("Summen af fuld hus: 21\n"); // udskriver summen af fuld hus
        fuld_hus_sum=21;
    }
    else if (count7_3>2 && count7_6>1)
    {
        printf("Summen af fuld hus: 21\n"); // udskriver summen af fuld hus
        fuld_hus_sum=21;
    }
    else if (count7_6>2 && count7_1>1)
    {
        printf("Summen af fuld hus: 20\n"); // udskriver summen af fuld hus
        fuld_hus_sum=20;
    }
    else if (count7_5>2 && count7_2>1)
    {
        printf("Summen af fuld hus: 19\n"); // udskriver summen af fuld hus
        fuld_hus_sum=19;
    }
    else if (count7_3>2 && count7_5>1)
    {
        printf("Summen af fuld hus: 19\n"); // udskriver summen af fuld hus
        fuld_hus_sum=19;
    }
    else if (count7_4>2 && count7_3>1)
    {
        printf("Summen af fuld hus: 18\n"); // udskriver summen af fuld hus
        fuld_hus_sum=18;
    }
    else if (count7_2>2 && count7_6>1)
    {
        printf("Summen af fuld hus: 18\n"); // udskriver summen af fuld hus
        fuld_hus_sum=18;
    }
    else if (count7_5>2 && count7_1>1)
    {
        printf("Summen af fuld hus: 17\n"); // udskriver summen af fuld hus
        fuld_hus_sum=17;
    }
    else if (count7_3>2 && count7_4>1)
    {
        printf("Summen af fuld hus: 17\n"); // udskriver summen af fuld hus
        fuld_hus_sum=17;
    }
    else if (count7_4>2 && count7_2>1)
    {
        printf("Summen af fuld hus: 16\n"); // udskriver summen af fuld hus
        fuld_hus_sum=16;
    }
    else if (count7_2>2 && count7_5>1)
    {
        printf("Summen af fuld hus: 16\n"); // udskriver summen af fuld hus
        fuld_hus_sum=16;
    }
    else if (count7_1>2 && count7_6>1)
    {
        printf("Summen af fuld hus: 15\n"); // udskriver summen af fuld hus
        fuld_hus_sum=15;
    }
    else if (count7_4>2 && count7_1>1)
    {
        printf("Summen af fuld hus: 14\n"); // udskriver summen af fuld hus
        fuld_hus_sum=14;
    }
    else if (count7_2>2 && count7_4>1)
    {
        printf("Summen af fuld hus: 14\n"); // udskriver summen af fuld hus
        fuld_hus_sum=14;
    }
    else if (count7_3>2 && count7_2>1)
    {
        printf("Summen af fuld hus: 13\n"); // udskriver summen af fuld hus
        fuld_hus_sum=13;
    }
    else if (count7_1>2 && count7_5>1)
    {
        printf("Summen af fuld hus: 13\n"); // udskriver summen af fuld hus
        fuld_hus_sum=13;
    }
    else if (count7_2>2 && count7_3>1)
    {
        printf("Summen af fuld hus: 12\n"); // udskriver summen af fuld hus
        fuld_hus_sum=12;
    }
    else if (count7_3>2 && count7_1>1)
    {
        printf("Summen af fuld hus: 11\n"); // udskriver summen af fuld hus
        fuld_hus_sum=11;
    }
    else if (count7_1>2 && count7_4>1)
    {
        printf("Summen af fuld hus: 11\n"); // udskriver summen af fuld hus
        fuld_hus_sum=11;
    }
    else if (count7_1>2 && count7_3>1)
    {
        printf("Summen af fuld hus: 9\n"); // udskriver summen af fuld hus
        fuld_hus_sum=9;
    }
    else if (count7_2>2 && count7_1>1)
    {
        printf("Summen af fuld hus: 8\n"); // udskriver summen af fuld hus
        fuld_hus_sum=8;
    }
    else if (count7_1>2 && count7_2>1)
    {
        printf("Summen af fuld hus: 7\n"); // udskriver summen af fuld hus
        fuld_hus_sum=7;
    }
    else{
        printf("\nAntal af fuld hus: 0\n"); // udskriver antal af fuld hus
        fuld_hus_sum=0;
    }
    
    

    printf("\n14. runde:\n"); // fjorten runde
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        terninger[i] = roll_multiple_dice(); // funktion til at kaste terningerne
        printf("%d ", terninger[i]); // udskriver terningerne  
    }
    int chance_sum=0;
    count7_1 = 0; 
    count7_2 = 0; 
    count7_3 = 0; 
    count7_4 = 0; 
    count7_5 = 0; 
    count7_6 = 0;
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        if(terninger[i] == 1){ // if statement til at tælle antal af 1'ere
            count7_1++; // tæller antal af 1'ere
        }
        if(terninger[i] == 2){ // if statement til at tælle antal af 2'ere
            count7_2++; // tæller antal af 2'ere
        }
        if(terninger[i] == 3){ // if statement til at tælle antal af 3'ere
            count7_3++; // tæller antal af 3'ere
        }
        if(terninger[i] == 4){ // if statement til at tælle antal af 4'ere
            count7_4++; // tæller antal af 4'ere
        }
        if(terninger[i] == 5){ // if statement til at tælle antal af 5'ere
            count7_5++; // tæller antal af 5'ere
        }
        if(terninger[i] == 6){ // if statement til at tælle antal af 6'ere
            count7_6++; // tæller antal af 6'ere
        }
    }
    printf("\n"); // giver et mellemrum
    if(count7_6>4){
        chance_sum=30;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>3 && count7_5 >0)
    {
        chance_sum=29;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>2 && count7_5>1)
    {
        chance_sum=28;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>3 && count7_4>0)
    {
        chance_sum=28;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>1 && count7_5>2)
    {
        chance_sum=27;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    }
    else if (count7_6>3 && count7_3 >0)
    {
        chance_sum=27;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>0 && count7_5>3)
    {
        chance_sum=26;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>2 && count7_4>1)
    {
        chance_sum=26;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>3 && count7_2>0)
    {
        chance_sum=26;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>3 && count7_1>0)
    {
        chance_sum=25;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>4)
    {
        chance_sum=25;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>1 && count7_4>2)
    {
        chance_sum=24;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>2 && count7_3>1)
    {
        chance_sum=24;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>3 && count7_4>0)
    {
        chance_sum=24;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>2 && count7_4>1)
    {
        chance_sum=23;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>3 && count7_3>0)
    {
        chance_sum=23;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>0 && count7_4>3)
    {
        chance_sum=22;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>2 && count7_2>1)
    {
        chance_sum=22;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>1 && count7_4>2)
    {
        chance_sum=22;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>1 && count7_4>2)
    {
        chance_sum=22;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>3 && count7_2>0)
    {
        chance_sum=22;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>1 && count7_3>2)
    {
        chance_sum=21;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>0 && count7_4>3)
    {
        chance_sum=21;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>2 && count7_3>1)
    {
        chance_sum=21;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>3 && count7_1>0)
    {
        chance_sum=21;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>2 && count7_1>1)
    {
        chance_sum=20;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_4>4)
    {
        chance_sum=20;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>1 && count7_3>2)
    {
        chance_sum=19;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>2 && count7_2>2)
    {
        chance_sum=19;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_4>3 && count7_3>0)
    {
        chance_sum=19;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>0 && count7_3>3)
    {
        chance_sum=18;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>1 && count7_2>2)
    {
        chance_sum=18;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_4>2 && count7_3>1)
    {
        chance_sum=18;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_4>3 && count7_2>0)
    {
        chance_sum=18;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>0 && count7_3>3)
    {
        chance_sum=17;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>2 && count7_1>1)
    {
        chance_sum=17;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_4>1 && count7_3>2)
    {
        chance_sum=17;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_4>3 && count7_1>0)
    {
        chance_sum=17;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>1 && count7_2>2)
    {
        chance_sum=16;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_4>0 && count7_3>3)
    {
        chance_sum=16;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_4>2 && count7_2>1)
    {
        chance_sum=16;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>1 && count7_1>2)
    {
        chance_sum=15;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_3>4)
    {
        chance_sum=19;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>0 && count7_2>3)
    {
        chance_sum=14;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_4>1 && count7_2>2)
    {
        chance_sum=14;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_4>2 && count7_1>1)
    {
        chance_sum=14;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_3>3 && count7_2>0)
    {
        chance_sum=14;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>0 && count7_2>3)
    {
        chance_sum=13;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>1 && count7_1>2)
    {
        chance_sum=13;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_3>2 && count7_2>1)
    {
        chance_sum=13;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_3>3 && count7_1>0)
    {
        chance_sum=13;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_4>0 && count7_2>3)
    {
        chance_sum=12;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_3>1 && count7_2>2)
    {
        chance_sum=12;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_4>1 && count7_1>2)
    {
        chance_sum=11;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_3>0 && count7_2>3)
    {
        chance_sum=11;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_3>2 && count7_1>1)
    {
        chance_sum=11;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_6>0 && count7_1>3)
    {
        chance_sum=10;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_2>4)
    {
        chance_sum=10;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_5>0 && count7_1>3)
    {
        chance_sum=9;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_3>1 && count7_1>2)
    {
        chance_sum=9;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_2>3 && count7_1>0)
    {
        chance_sum=9;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_4>0 && count7_1>3)
    {
        chance_sum=8;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_2>2 && count7_1>1)
    {
        chance_sum=8;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_3>0 && count7_1>3)
    {
        chance_sum=7;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_2>1 && count7_1>2)
    {
        chance_sum=7;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_2>0 && count7_1>3)
    {
        chance_sum=6;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else if (count7_1>4)
    {
        chance_sum=5;
        printf("Summen af chance: %d\n", chance_sum); // udskriver summen af chance
    } else{
        chance_sum=0;
        printf("\nAntal af chance: 0\n"); // udskriver antal af chance
    }
        

    
    

    printf("\n15. runde:\n"); // femtende runde
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        terninger[i] = roll_multiple_dice(); // funktion til at kaste terningerne
        printf("%d ", terninger[i]); // udskriver terningerne  
    }
    count7_1 = 0; 
    count7_2 = 0; 
    count7_3 = 0; 
    count7_4 = 0; 
    count7_5 = 0; 
    count7_6 = 0;
    int yatzy_sum=0;
    for(int i = 0; i < antal_af_terninger; i++){ // for loop til at kaste terningerne
        if(terninger[i] == 1){ // if statement til at tælle antal af 1'ere
            count7_1++; // tæller antal af 1'ere
        }
        if(terninger[i] == 2){ // if statement til at tælle antal af 2'ere
            count7_2++; // tæller antal af 2'ere
        }
        if(terninger[i] == 3){ // if statement til at tælle antal af 3'ere
            count7_3++; // tæller antal af 3'ere
        }
        if(terninger[i] == 4){ // if statement til at tælle antal af 4'ere
            count7_4++; // tæller antal af 4'ere
        }
        if(terninger[i] == 5){ // if statement til at tælle antal af 5'ere
            count7_5++; // tæller antal af 5'ere
        }
        if(terninger[i] == 6){ // if statement til at tælle antal af 6'ere
            count7_6++; // tæller antal af 6'ere
        }
    }
    if(count7_1==5 || count7_2==5 || count7_3==5 || count7_4==5 || count7_5==5 || count7_6==5){
        printf("\nAntal af yatzy: 1\n"); // yatzy
        printf("Summen af yatzy: 50\n"); // yatzy
        yatzy_sum=50;
    } else{
        printf("\nAntal af yatzy: 0\n"); 
        yatzy_sum=0;
    }
    
    int total=yatzy_sum+chance_sum+fuld_hus_sum+stor_sum+lille_sum+fire_ens_sum+tre_ens_sum+bonus+sum; // variabel til at udregne total
    printf("\nTotal: %d\n", total); // udskriver total

    goto start; // genstarter programmet
}


int roll_multiple_dice(){ // funktion til at kaste terningerne
    int terning = rand() % 6 + 1; // variabel til terning og random funktion som giver en værdi mellem 1 og 6 til at kaste terningerne 
    return terning; // returnerer terning
}