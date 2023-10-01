#include <stdio.h>

/* Inside the word 1, 
Outside the word 0  */
#define IN 1
#define OUT 0

main(){
    int c, nc, nl, nw, state;
    nc = nl = nw = 0;
    state = OUT;
    while((c = getchar()) != EOF ){
        ++nc;
        if(c == '\n'){
            ++nl;
        }
        if(c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        }
        else if ( state == OUT){
            state = IN;
            ++nw;
        }
    printf("state: %d nc: %d nl: %d nw: %d \n", state, nc, nl, nw);
    }
}