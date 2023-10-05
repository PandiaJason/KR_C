#include <stdio.h>
#define SIZE 7
#define LIMIT 40

main(){
    int i, j, k, step1, step2, step3, step4;
    printf("HORIZONTAL CURVE\n");
    step1 = 2;
    step2 = LIMIT/2;
    step3 = LIMIT/2;
    step4 = LIMIT;


    for (i=1;i<=SIZE; ++i){
        for(j=1; j<=LIMIT;++j){
            if(j%2==0 && j==step1 && j< 10){    
                printf("%s","*");
            }
            if(j%2==0 && j==step2 && j> 10 && j< 20){    
            printf("%s","*");
            }
            if(j%2==0 && j==step3 && j> 20 && j< 30){    
            printf("%s","*");
            }
            if(j%2==0 && j==step4 && j> 30 && j< 40){    
            printf("%s","*");
            }
            
            else{
                printf("  ");
            }
        }
        step1=step1+2;
        step2=step2-2;
        step3=step3+2;
        step4=step4-2;


    printf("\n");
    }printf("\n");
    
    
    
}