#include <stdio.h>

main(){
    int c, nc, nw, state, p;
    p = EOF;
    while((c = getchar()) != EOF){
        if(c == ' '&& p == ' ' ){
            continue;
        }
        else if (p == ' ' && c != ' '){
            putchar('\n');         
        }

        putchar(c);
        p = c;
    }

}