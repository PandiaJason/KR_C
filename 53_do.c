#include<stdio.h>

/* We can also keep the 
secondary functions at top */

int get_size();
void printgrid(int size);

void main()
{

    int n;

    /* get_size of the grid */
    n = get_size();

    /* print the grid */
    printgrid(n);

}

int get_size()
{
    int n;
    do {
        printf("Size ");
        scanf("%d", &n);
    }
    while (n < 1);

    return n;
}

void printgrid(int size)
{
    int i, j;
    for (i = 0; i < size; ++i) {
        for (j = 0; j < size; ++j) {
            printf("#");
        }
        printf("\n");
    }
}