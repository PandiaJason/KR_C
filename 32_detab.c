/* write a progam to detab that replaces tabs
in the input with the proper number of blanks
to space to the next tab stop. Assume a fixed
set of tab stop, say n columns, Should n be a
variable or a symbolic parameter? */

#include <stdio.h>
#define MAXSIZE 1000
#define TABSTOP 4

int detab(void);
char line[MAXSIZE];

int main()
{
    int len;

    while ((len = detab()) > 0) {
    }

    return 0;

}

int detab(void)
{
    int i, c, p, j;
    extern char line[];
    p = EOF;
    i = 0;

    while (i < MAXSIZE - 1 && (c = getchar()) != EOF && c != '\n') {

        if (c == '\t') {
            if (p != '\t') {
                for (j = i; j < (TABSTOP + i); ++j) {
                    line[j] = ' ';
                    p = line[j];
                }
                i = j;
            }
            continue;
        }

        if (c != '\t') {
            line[i] = c;
            p = c;

        }
        ++i;

    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    printf("%s", line);
    return i;
}