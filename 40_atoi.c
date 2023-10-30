#include <stdio.h>
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
    int i, n;
    n = 0;

    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        n = 10 * n + (s[i] - '0');
        /*printf("n: %d \n", n);*/
    }
    return n;
}