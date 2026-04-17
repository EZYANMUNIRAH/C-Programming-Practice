#include <stdio.h>

int main() {
    int arr[5];
    int n = 5;
    char choice;

    do{
    printf("Enter 5 elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = -1;

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } 
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Largest: %d\n", largest);
    printf("Second largest: %d\n", second);
    printf("Do you want to enter another set of numbers? (Y/N): ");
    scanf(" %c", &choice);
    } while(choice == 'Y' || choice == 'y');
    

    return 0;
}
