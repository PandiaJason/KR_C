#include<stdio.h>
#include <math.h>
#define PI 3.14159265359

/*print sine wave
  use sin() func with 
  rad formula rad = degree *(PI /180.0)*/
main(){
  int i, j, wave;
  double radian, result;

  for (i = 0; i <= 360; i = i+12){
    radian = i * (PI / 180.0);
    for (j = -40; j < 40; ++j){
        result = sin(radian);
        wave = (int) (result * 38);
            if(wave == j){
                putchar('*');
            }
            else{
                putchar(' ');
            }
        
    }
  }printf("\n");
}