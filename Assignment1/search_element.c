#include <stdio.h>
void searchElement(int arr[], int size, int element);
int main() {
    int arr[100];
    int size;
    int element;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Enter the elements of the array %d:", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    searchElement(arr, size, element);
    
    return 0;
}
void searchElement(int arr[], int size, int element){

    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("Element found at index %d\n", i);
        }
    }
}