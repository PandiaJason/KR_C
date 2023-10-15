/* Write a program entab that replaces strings of
blanks by the minimum number of tabs and blanks to
achieve the same spacing. Use the same tab stops as
for detab. When either a tab or a single blank would
suffice to reach a tab stop, which should be given 
preference? */

#include <stdio.h>
#define BLANKSTOP 1
#define MAXSIZE 1000

char line[MAXSIZE];
int entab(void);

int main()
{
    int len;

    while((len = entab()) > 0) {
    }

    return 0;
}

int entab(void)
{
    int i, c, p;
    extern char line[];
    i = 0;
    p = EOF;
    
    while((c = getchar()) != EOF && c !='\n') {

        if (c == ' ') {
            if (p != ' ') {
                    line[i] = '\t';
                    p = line[i];
                    ++i;
            }continue;
        }

        else {
            line[i] = c;
            p = c;
            ++i;
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