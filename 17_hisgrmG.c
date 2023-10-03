#include <stdio.h>
#define IN 1
#define OUT 0
#define SIZE 21
/* print a histogram of the 
lengths of words in its input.
011111011111110111110
jason pandian jason
12345'1234567'12345\
a\n
0 1 0
b= i =2, 1
j=1, 2
2>=2 2>=1 
0 ' 
*/
main(){
    int c, i, j, b, t, nchar, nword, state;
    int wldata[SIZE];
    state = OUT;
    nchar = nword = b = t = 0;

    for (i=1; i < SIZE; ++i){
        wldata[i] = 0;
        printf("%d ", wldata[i]);

    }
    printf("\n");

    while ((c= getchar()) != EOF){
        if (state == OUT && c != ' ' && c != '\n' || state == IN && c != ' ' && c != '\n'){
            ++nchar;
        }
        if ( state == IN && c == ' ' || c == '\n'){
            ++wldata[nchar];
            nchar = 0;
        }
        if (c==' ' || c=='\n' || c=='\t'){
            state = OUT;
        }
        else if (state == OUT){
            state = IN;
            ++nword;
        }

        if (c == '\n'){
            /* printf("nword = %d \n", nword); */

            printf("b = %d \n", b);

            for (i=1; i < SIZE; ++i){
                if (wldata[i]>=b){
                    b = wldata[i];
                }
            }
            printf("b = %d \n", b);

            printf("WORD LENGTH HISTROGRAM \n");
            for (i = b; i > 0; --i) {
                for (j = 1; j < SIZE; ++j) {
                    if (wldata[j] >= i) {
                        printf("%3s","*");
                    } else {
                        printf("%3s"," ");
                    }
                }
                printf("\n");
            }

            for (i = 1; i < SIZE; ++i) {
                printf("%3d", i);
            }
            b = 0;
            printf("\n");

        }
    }
}