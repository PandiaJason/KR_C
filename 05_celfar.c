#include<stdio.h>

/* symbolic constants */
#define LOWER 0
#define UPPER 300
#define STEP 20 

 main(){
    int fahr;
    printf("\n-------------------\n");
    printf("|%3s  |  %6s |\n", "fahr", "celcius");
    printf("-------------------\n");
    for(fahr =UPPER ; fahr >= LOWER; fahr = fahr - STEP){
        printf("|%3d   |  %6.1f  |\n", fahr, (5.0 / 9.0) * (fahr-32));
        printf("-------------------\n");
    }
 }