#include<stdio.h>
#include <math.h>
#define PI 3.14159265359

/*print sine wave
  use sin() func with 
  rad formula rad = degree *(PI /180.0)*/
main(){
  int i, wave;
  double radian, result;

  for (i = 0; i <= 360; i=i+12){
    radian = i * (PI / 180.0);
    result = sin(radian);
    wave = (int) (result * 40);
    printf("%*c\n",40 + wave, '*');
  }

}