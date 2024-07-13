# include <stdio.h>
void findMinMax(int arr[], int size, int *min, int *max);

int main() {
    int arr[100];
    int size, min, max;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        printf("Enter the elements of the array %d:",i+1);
        scanf("%d", &arr[i]);
    }
    findMinMax(arr, size, &min, &max);
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
    return 0;
}
void findMinMax(int arr[], int size, int *min, int *max){
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}