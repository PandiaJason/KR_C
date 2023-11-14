#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main()
{
    unsigned x = 5;
    int p = 4;
    int n = 3;

    printf("%u \n", getbits(x,p,n));

    return 0;
}

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}