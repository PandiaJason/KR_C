#include <stdio.h>
#define IN 0
#define OUT 1
#define SIZE 21

/*print word length as 
histrogram(vertical)
Go from all up then next ..*/

main(){
    int c, i, b, j, nword, nchar, state, wldata[SIZE];
    state = OUT;
    nword = nchar = b = 0;

    for (i = 1; i < SIZE; ++i ){
        wldata[i] = 0;
    }

    while (( c= getchar()) != EOF){
        if(state == OUT &&  c != ' ' && c !='\n' || state == IN &&  c != ' ' && c !='\n'){
            ++nchar;
        }
        if(state == IN &&  c == ' ' || c =='\n'){
            ++wldata[nchar];
            nchar = 0;
        }
        if(c==' ' || c == '\n'){
            state = OUT;
        }

        else if(state == OUT){
            state = IN;
            ++nword;
        }

        if (c =='\n'){
            printf("nword = %d \n", nword);
        
            for (i = 1; i < SIZE; ++i ){
            printf(" %d ", wldata[i]);
                if(wldata[i]>b){
                    b=wldata[i];
                }

            }
            printf("\n");
            printf("b = %d \n", b);

            printf("WORD LENGTH HISTOGRAM VERTICAL \n");
            
            /*
            * - - => top , we want to know the big - b and 1 2 3 4 ...  
            * - *
            1 2 4
            wldata[j] >=i 5(wldata[i])>=5(j) 0>=5 .....
                          5>=4 4>=4 0>=4 .....
                          5>=3 4>=3 0>=3 .....
             */
            for ( i = b; i > 0; --i){
                for (j = 1; j < SIZE; ++j){
                    if (wldata[j]>=i){
                        printf("%3s", "*");
                    }
                    else{
                        printf("%3s", " ");
                    }
                }printf("\n");
            }
            for (i = 1; i < SIZE; ++i ){
            printf("%3d", i);

            }printf("\n");
            b =0;

        }
    }
}