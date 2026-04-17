#include <stdio.h>

int main(){
    int arr1[4];
    int arr2[4];
    int n1 = 4, n2 = 4;

    int merged[8][2]; // FIXED SIZE
    int i = 0, j = 0, k = 0;

    printf("Enter 4 elements for first array: ");
    for(int x = 0; x < n1; x++) {
        scanf("%d", &arr1[x]);
    }

    printf("Enter 4 elements for second array: ");
    for(int x = 0; x < n2; x++) {
        scanf("%d", &arr2[x]);
    }

    // Merge arrays
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            merged[k][0] = arr1[i];
            merged[k][1] = 1;
            i++;
        } else if(arr1[i] > arr2[j]) {
            merged[k][0] = arr2[j];
            merged[k][1] = 2;
            j++;
        } else {
            merged[k][0] = arr1[i];
            merged[k][1] = 3;
            i++;
            j++;
        }
        k++;
    }

    while (i < n1) {
        merged[k][0] = arr1[i];
        merged[k][1] = 1;
        i++;
        k++;
    }

    while (j < n2) {
        merged[k][0] = arr2[j];
        merged[k][1] = 2;
        j++;
        k++;
    }

    printf("Merged array:\n");
    for(int x = 0; x < k; x++) {
        printf("%d ", merged[x][0]);
    }

    return 0;
}