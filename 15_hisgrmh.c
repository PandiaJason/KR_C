#include <stdio.h>
#define IN 1
#define OUT 0

/* print a histogram of the 
lengths of words in its input.*/

main(){
    int c, i, state, nword, nchar, wc;
    int ndata[20];
    state = OUT;
    nword = nchar = wc = 0;

    for( i = 0; i < 20; ++i){
        ndata[i] = 0;
    }

    while ((c = getchar()) != EOF){

        if ((state == IN && (c != '\n'  && c != ' ')) || (state == OUT  && (c != '\n' && c != ' '))){
            ++nchar;

        }
        if ((state == IN && c == '\n') || (state == IN && c == ' ')){
            ++ndata[nchar];
            ++wc;
            nchar =0;

        }

        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        }

        else if ( state == OUT){
            state = IN;
            ++nword;
        }
        printf("nword= %d, nchar = %d, wc = %d, ndata = ", nword, nchar, wc);


        for (i = 0; i < 20 ; ++i){
            printf("%d ", ndata[i]);
        }

        printf("\n");
    }

}