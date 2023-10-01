#include<stdio.h>

/* print Fahrenheit-Celcius table
 for fahr = 0, 20 , ..., 300 */

 main(){
    float fahr, celcius;
    float low, upper, step;

    low = 0;
    upper = 300;
    step = 20;

    fahr = low;
    printf("-------------------\n");
    printf("|%3s  |  %6s |\n", "fahr", "celcius");
    printf("-------------------\n");

    while(fahr <= upper){
        celcius = (5.0 / 9.0) * (fahr-32);
        printf("|%3.0f   |  %6.1f  |\n", fahr, celcius);
        printf("-------------------\n");
        fahr = fahr + step;
    }
 }