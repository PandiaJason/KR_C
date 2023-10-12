/* Write a function reverse(s) that reverses the character string s. 
Use it to write a program that reverses its input a line at a time.*/

#include <stdio.h>
#define MAXSIZE 1000

int reverse(char s[]);

int main()
{
    char line[MAXSIZE];
    while (reverse(line) > 0);

    return 0;
}

int reverse(char s[])
{
    int i, j, c , p;
    char r[MAXSIZE];

    for (i = 0; i < MAXSIZE -1 && (c = getchar()) != EOF && c != '\n' ; ++i) {
        s[i] = c;
    }
    s[i] = '\0';

    --i;

    for (j = 0; i >=0 ; ++j) {
        r[j] = s[i];
        --i;
    }
    r[j] = '\0';

    printf("%s \n", r);

    return j;

}
