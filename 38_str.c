#include <stdio.h>
#define MAXSIZE 1000

int strlength(char s[]);

void main() {
    int c, i;
    char str[MAXSIZE];
    i = 0;
    while ((c = getchar()) != EOF) {
        str[i] = c;
        ++i;
        if (c == '\n') {
            break;
        }
    }
    str[i] = '\0';
    printf("strlength: %d \n",strlength(str));
}

int strlength(char s[])
{
    int i;
    i = 0;
    while (s[i]!= '\0') {
        ++i;
    }
    return i;
}