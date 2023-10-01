#include <stdio.h>

main(){
    int c, p;
    p = EOF; /* EOF is -1 */
    while ((c = getchar()) != EOF){
        if (c ==' '){
            if (p ==' '){
                continue;
            }
        }
    putchar(c);
    /* printf("\n c: %d\n", c);

    printf("\n p: %d\n", p); */
    p = c;

    }
}