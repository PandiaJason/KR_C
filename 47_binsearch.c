#include <stdio.h>

int binsearch(int x, int sa[], int n);
void main()
{
    int x, n, i;
    n = 10;
    int sa[n];
    for (i = 0; i < n; ++i) {
        sa[i] = i + 1;
    }
    binsearch(11, sa, n);
}

int binsearch(int x, int sa[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + high / 2;
        if (x < sa[mid]) {
            high = mid + 1;
        }

        else if (x > sa[mid]) {
            low = mid + 1;
        }

        else {
            printf("The %d is found in sa[%d] location\n", x, mid);
            return mid;
        }

    }
    printf("The %d is not found in any sa location.\n", x);
    return -1;
}