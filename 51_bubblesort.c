/* bubblesort: sort v[0] ...v[n-1] into increasing order */
#include <stdio.h>

void bubblesort(int v[], int n);

void main()
{
    int i;
    int n = 6;
    int arr[] = {1, 4, 2, 3, 5, 6};
    bubblesort(arr, n);
}


void bubblesort(int v[], int n)
{
    int i, temp;
    int swap = 1;
    while (swap) {
        swap = 0;
        for (i = 0; i < n-1; ++i) {
            if (v[i] > v[i+1]) {
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                swap = 1;
            }
        }
    }
    
    for (i = 0; i < n; ++i) {
    printf("%d ", v[i]);
    }
    printf("\n");
}