#include <stdio.h>

float calculateAverage(int arr[], int size);
int main() {
    int arr[100];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Enter the elements of the array %d:", i+1);
        scanf("%d", &arr[i]);
    }

    float avg = calculateAverage(arr, size);
    printf("The average of the array is: %.2f\n", avg);
    
    return 0;
}
float calculateAverage(int arr[], int size){
    int avg = 0;
    for (int i = 0; i < size; i++) {
        avg += arr[i];
    }
    int output=avg/size;
    return output;
}