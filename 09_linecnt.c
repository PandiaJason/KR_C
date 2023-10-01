#include <stdio.h>

main(){
    int c, nl;
    nl=0;
    while ((c= getchar()) != EOF){
        /* ' ' - represents numarical value of character in the machine code */
        if (c == '\n'){
            ++nl;
        }
        printf("%d\n",nl);
    }
}