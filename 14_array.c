#include <stdio.h>
/* print the count of digits in matrix
  print the count white spaces 
  and other characters */

  main(){
    int c, i, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;
    for (i = 0; i < 10 ; ++i){
        ndigit[i] = 0;
    }
    printf("Digit count = ");
    for (i = 0; i < 10 ; ++i){
        printf("%d ",ndigit[i]);
    }

    printf("\n");

    while((c= getchar()) != EOF){
        if (c >= '0' && c <= '9'){
            ++ndigit[c - '0'];
        }

        else if (c == ' ' || c == '\n' || c == '\t'){
            ++nwhite;
        }

        else{
            printf("dummy");
            ++nother;
        }
        printf("Digit count = ");
        for (i = 0; i < 10 ; ++i){
            printf("%d, ",ndigit[i]);
        }

        printf("nwhite = %d, nother = %d \n", nwhite, nother);
    }
  }