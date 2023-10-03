#include <stdio.h>
#define SIZE 32
#define HIGH 57
#define LOW 48
#define INIT 0

/*print histrogram(vertical)
of different frequencies of 
different characters in its input
Ex: Jason is learning C. 
But onlu implemented for numbers*/

main(){
    int c, i, j, n;
    n = i = INIT;
    int ndata[SIZE];
     for(i=INIT; i<SIZE; ++i){
        ndata[i]=0;
    }

    while((c=getchar()) != EOF){
        if(c>=LOW && c<=HIGH){
        ndata[n] = c;
        }
        ++n;
        if(c=='\n'){
            printf("NUMBER WAVE\n");
            /*actually we can adjust to 0 to 127
            I made this only for numbers*/
            for(i=HIGH; i>=LOW;--i){
                for(j=INIT; j<SIZE;++j){
                    if(ndata[j]==i){
                        printf("*");
                    }
                    else{
                        printf(".");
                    }
                }printf("\n");
            }
        }
       

    }
}