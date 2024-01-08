#include <stdio.h>

/* Array to Float */

double atof(char s[]);

int main()
{
    char num[] = {'1','1','.','1','1','\0'};
    
    printf("%f \n", atof(num));

    return 0;
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
        printf("power: %f \n", power);
        power *= 10;
    }

    return sign * val / power;
    
}