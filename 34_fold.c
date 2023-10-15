/* Write a program to ``fold'' long input lines 
into two or more shorter lines after the last 
non-blank character that occurs before the n-th 
column of input. Make sure your program does 
something intelligent with very long lines, 
and if there are no blanks or tabs before 
the specified column. */

#include <stdio.h>

#define MAXSIZE 1000
#define FOLDSTART 59
#define FOLDSTOP 60

int getline(void);
char line[MAXSIZE];

int main()
{
    int len;
    extern char line[];
    while ((len = getline()) > 0) {
    }

    return 0;

}

int getline(void)
{
    int i, c, fold, p, set;
    fold = set = 0;
    p = EOF;
    extern char line[];
    for (i = 0; i < MAXSIZE - 1 && (c = getchar()) != 0 && c != '\n'; ++i) {
        if (fold >= FOLDSTART && fold <= FOLDSTOP) {
            if (c == ' ' &&  p != ' ') {
                line[i] = c;
                p = c;
                set = 1;
                ++fold;
            }

            else { 
                if (set == 1) {
                    line[i] = '\n';
                    ++i;
                    set = 0;
                    fold = 0;

                }
                line[i] = c;
                p = c;
            }
        }

        else {
            line[i] = c;
            p = c;
            ++fold;
        }
    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    printf("%s", line);
    
    return i;

}