/*Write a program to remove all comments
from a C program. Don't forget to handle
quoted strings and character constants
properly. C comments don't nest.*/

#include <stdio.h>
#define MAXSIZE 1000
#define IN 1
#define OUT 0
#define SLASH 47
#define STAR 42

int decomment(char mlines[]);

int main()
{
    int len;
    len = 0;
    char modified[MAXSIZE];

    while ((len = decomment(modified)) > 0) {
    }

    return 0;
}

int decomment(char modified[])
{
    int i, c, prev, state, j;
    j = 0;
    prev = EOF;
    state = OUT;
    for (i = 0; i < MAXSIZE - 1 && (c = getchar()) != EOF; ++i) {
        if (c == SLASH && prev != ' ') {
                state = IN;
        }
        if (c == SLASH && (prev == ' ' || prev == '\t')) {
        }
        if (c == STAR && prev == SLASH && state == IN) {
        }
        if (c == SLASH && prev == STAR && state == IN) {
                state = OUT;
        }
        else if (state == OUT) {
            modified[j] = c;
            ++j;

        }
        prev = c;
    }

    modified[i] = '\0';
    printf("%s", modified);

    return i;
}