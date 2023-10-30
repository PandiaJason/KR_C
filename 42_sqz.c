#include <stdio.h>
#define MAXSIZE 1000

void sqz(char s[], int c);

void main()
{
    int i, c, sc;
    char sArr[MAXSIZE];
    sc = 'a';
    i = 0;

    while ((c = getchar()) != EOF && c != '\0') {
        sArr[i++] = c;
        if (c == 4) {
            break;
        }
    }
    sArr[i] = '\0';

    sqz(sArr, sc);
}

void sqz(char s[], int c)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; ++i) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';

    printf("%s", s);
}