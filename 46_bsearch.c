#include <stdio.h>

int main()
{
    int data[10];
    int r, l, mid, i, found;
    found = 0;
    int search = 11;
    for(i = 0; i < 10; ++i) {
        data[i] = i+1;
    }
    
    r = 0;
    l = 9;
    
    while (r<=l) {
        mid =  (r+l)/2;

        if (data[mid] == search) {
            printf("The %d is found in data[%d] location\n", data[mid], mid);
            found = 1;
            break;
            }

        else if (data[mid] < search) {
            r = mid + 1;
        }

        else if (data[mid] > search) {
            l = mid - 1;
        }
    }
    if (!found) {
        printf("The %d is not found in any data location.\n", search);
    }

    return 0;
}