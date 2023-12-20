/* shellsort: sort v[0] ...v[n-1] into increasing order */
#include <stdio.h>

void shellsort(int v[], int n);

void main()
{
    int n = 6;
    int i;
    int arr[] = {5, 4, 0, 1, 3, 2};
    printf("Before Sorting\n---------------------\n");

    printf("|");

    for (i = 0; i < n; ++i) {
        printf("%d|", arr[i]);
    }
    printf("\n---------------------\n");
    shellsort(arr, n);
}


void shellsort(int v[], int n)
{
    int gap, i, j, temp;
    printf("Execution\n-------------------------------\n");

    for (gap = n/2; gap > 0; gap /= 2) {
        for (i = gap; i < n; ++i) {
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                printf(" bf gap = %d j = %d, j + gap =  %d\n", gap, j, j + gap);
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
                printf(" af v[%d] = %d, v[%d + %d] =  %d\n",j, v[j], j, gap, v[j + gap]);
                printf("-------------------------------\n");
            }
        }
    }
    printf("After Sorting\n---------------------\n");

    printf("|");

    for (i = 0; i < n; ++i) {
        printf("%d|", v[i]);
    }
    printf("\n---------------------\n");
} 