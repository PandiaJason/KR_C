/* print the longest line using external */

#include <stdio.h>

#define MAXSIZE 1000

int max;
char line[MAXSIZE];
char longest[MAXSIZE];

int getline(void);
void copy (void);

/* print longest input line; specialized version */
int main()
{
    int len;
    extern max;
    extern char longest[];

    max = 0;

    while ((len = getline()) > 0) {
        if (len > max) {
            max = len;
            copy();
        }
    }

    if (max > 0) {
        printf("%s", longest);
    }

    return 0;
}

/* getline: specialized version */
int getline(void)
{
    int i, c;
    extern char line[];

    for (i = 0; i < MAXSIZE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;

}

/* copy: specialized version */
void copy(void)
{
    int i;
    extern char line[];
    extern char longest[];

    for (i = 0; (longest[i] = line[i]) != '\0'; ++i) {
    }
}