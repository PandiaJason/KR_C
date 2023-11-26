#include <stdio.h>
#include <ctype.h>
#define MAXSIZE 1000

int atoi(char sArr[]);

void main()
{
    char sArray[MAXSIZE];
    int c, i;
    for (i = 0; (c = getchar()) != EOF; ++i) {
        sArray[i] = c;
        if (c == '\n') {
            break;
        }
    }
    sArray[i] = '\0';

    printf("atoi: %d \n", atoi(sArray));
} 

int atoi(char s[])
{
    int i, n, sign;

    for (i = 0; isspace(s[i]); ++i) /* skip 1st if that is space */
    ;
    /* printf("%d\n", i); */
    sign = (s[i] == '-') ? -1: 1; /* set -1 for -, else 1 for +. */
    if (s[i] == '+' || s[i] == '-') { /* skip + or -, index by 1*/
        ++i;
    }

    for (n = 0; isdigit(s[i]); ++i) {
        n = 10 * n + (s[i] - '0');
        /*printf("n: %d \n", n);*/
    }

    return sign * n;
}