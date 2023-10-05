#include <stdio.h>
#define SIZE 5
#define LIMIT 10

main(){
    int i, j, k, step;
    printf("VERTICAL CURVE\n");
    step = 2;

    for (i=0;i<=SIZE; ++i){
        for(j=LIMIT; j>0;--j){
            if(j%2==0 && j==step){    
                printf("%2s","*");
            }
            
            else{
                printf("  ");
            }
        }step=step+2;
        printf("\n");
    }
    
    step = LIMIT;

    for (i=0;i<=SIZE; ++i){
        for(j=LIMIT; j>0;--j){
            if(j%2==0 && j==step){    
                printf("%2s","*");
            }
            
            else{
                printf("  ");
            }
        }step=step-2;
        printf("\n");
    }
    step = 2;

    for (i=0;i<=SIZE; ++i){
        for(j=LIMIT; j>0;--j){
            if(j%2==0 && j==step){    
                printf("%2s","*");
            }
            
            else{
                printf("  ");
            }
        }step=step+2;
        printf("\n");
    }
    
}