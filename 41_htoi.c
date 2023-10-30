#include <stdio.h>
#define MAXSIZE 1000

int htoi(char sArr[]);

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

    printf("atoi: %d \n", htoi(sArray));
} 

int htoi(char s[])
{
    int i, n;
    n = i = 0;
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2;
    }
    for (; s[i] != '\0'; ++i) {
        n = n * 16;
        if (s[i] >= '0' && s[i] <= '9') {
             n += s[i] - '0';
        }
        else if (s[i] >= 'a' && s[i] <= 'f') {
            n +=  10 + s[i] - 'a';
        }
        else if (s[i] >= 'A' && s[i] <= 'F') {
            n += 10 + s[i] - 'A';
        }
        else {
            break;
        }
    }

    return n;
}