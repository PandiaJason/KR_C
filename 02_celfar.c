#include<stdio.h>

/* print Fahrenheit-Celcius table
 for fahr = 0, 20 , ..., 300 */

 main(){
    int fahr, celcius;
    int low, upper, step;

    low = 0;
    upper = 300;
    step = 20;

    fahr = low;
    while(fahr <= upper){
        celcius = 5 * (fahr-32) / 9;
        printf("%3d    %3d \n", fahr, celcius);
        fahr = fahr + step;
    }
 }