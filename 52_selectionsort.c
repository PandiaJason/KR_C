/* selectionsort: sort v[0] ...v[n-1] into increasing order */
#include <stdio.h>

void selectionsort(int v[], int n);

void main()
{
    int i;
    int n = 6;
    int arr[] = {6, 5, 1, 4, 2, 3};
    selectionsort(arr, n);
}


void selectionsort(int v[], int n)
{
    int i, j, low, temp;
    for (i = 0; i < n-1; ++i) {
        low = i;
        for (j = i+1; j < n; ++j) {
            if (v[low] > v[j]) {
                low = j;
            } 
        }
        printf("%d \n",low);  
        temp = v[i];
        v[i] = v[low];
        v[low] = temp;
    }

    
    for (i = 0; i < n; ++i) {
    printf("%d ", v[i]);
    }
    printf("\n");
}