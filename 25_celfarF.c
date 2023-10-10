#include<stdio.h>
/* print Fahrenheit-Celcius table
 for fahr = 0, 20 , ..., 300 */
int tconv(int low, int upper, int step);
int main(){
    tconv(0,300,20);
    return 0;
 }

 int tconv(int lower_limit, int upper_limit, int step_count){
    double fahr, celcius;
    for(fahr = lower_limit; fahr <= upper_limit; fahr = fahr + step_count){
        celcius = 5.0 / 9.0 * (fahr-32);
        printf("%9.0f    %9.1f \n", fahr, celcius);
    }
    return 0;
 } 