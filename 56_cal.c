#include <stdio.h>
#define MAXSIZE 100

int getline(char line[], int max);
double atof(char line[]);

int main()
{
    double sum;
    char line[MAXSIZE];

    sum = 0.0;

    /* power of termination */
    while (printf("line %s\n", line), (getline(line, MAXSIZE) > 0)) {
        printf("SUM\t%g\n", sum += atof(line));
    }
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;
    i = 0;

    while (--lim > 0 && (c = getchar()) != EOF && c >= '0' && c <='9' && c != '\n' || c == '.' ) {
        s[i++] = c;
    }

    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

double atof(char s[])
{
    double val, power;
    int i, sign;

    for (i = 0; s[i] == ' '; ++i)
        ;
    
    sign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '+' || s[i] == '-')
        i++;

    for (val = 0.0; s[i] >= '0' && s[i] <= '9'; ++i)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; s[i] >= '0' && s[i] <= '9'; ++i) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
        /* printf("power: %f \n", power);*/
    }

    return sign * val / power;
    
}