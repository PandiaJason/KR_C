#include <stdio.h>
#define IN 1
#define OUT 0
#define WORD_SIZE 21

/* print a histogram of the 
lengths of words in its input.*/

main(){
    int c, i, j, nchar, nword, state;
    int ndata[WORD_SIZE];
    state = OUT;
    nchar = nword = 0;

    for (i = 0; i < WORD_SIZE-1; ++i){
        ndata[i] = 0;
    }

    while((c=getchar()) != EOF){
        if((state == IN && (c != ' ' && c != '\n')) || (state == OUT && (c != ' ' && c != '\n')) ){
            ++nchar;
        }
        if(state==IN && c == ' ' || c == '\n' ){
            ++ndata[nchar];
            nchar=0;
        }
        if(c== ' ' || c == '\n' || c =='\t'){
            state = OUT;
        }

        else if(state == OUT){
            state = IN;
            ++nword;
        }
        if(c == '\n'){

            printf("\n World Lenght Historgram: \n");
            printf("__________________________________\n");

            for (i = 1; i < WORD_SIZE-1; ++i){
                printf("%2d |", i);
                for (j = 0; j < ndata[i]; ++j){
                    putchar('=');
                }
                putchar('\n');
            }
            printf("__________________________________\n");
        
        }
    }
}