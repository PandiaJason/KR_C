#include<stdio.h>
#include <math.h>
#define PI 3.14159265359

/*print sine wave
  use sin() func with 
  rad formula rad = degree *(PI /180.0)*/
main(){
  double i;
  while (i <= 360? printf("%*c \n",  (int) (sin(i+=12 * (PI / 180.0)) * 40 + 39  ), '*'): 0);
  printf("\n");
}