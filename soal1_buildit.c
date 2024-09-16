#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c, d;
    
    scanf("%d", &a);
    
    int arr[a];
    
        for (b = 0; b < a; b++) {
            scanf("%d", &arr[b]);
        }
    
    for (b = 0; b < a-1; b++) {
        for (c = 0; c < a-b-1; c++) {
            if (arr[c] > arr[c+1]) {
                d = arr[c];
                arr[c] = arr[c+1];
                arr[c+1] = d;
            }
        }
    }
    
    for (b = 0; b < a; b++) {
        printf("%d ", arr[b]);
        printf("\n");
    }
    
    return 0;
}