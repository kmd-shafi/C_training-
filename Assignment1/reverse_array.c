#include <stdio.h>
void reverseArray(int arr[], int size);
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
    reverseArray( arr, size);
    
    return 0;
}
void reverseArray(int arr[], int size){
    int temp;
    for(int i=0; i<size/2; i++){
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
        }
        for(int i=0; i<size; i++){
            printf("%d ", arr[i]);
        }
    }
