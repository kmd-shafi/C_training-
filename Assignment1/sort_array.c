# include <stdio.h>
void sortArray(int arr[], int size);

int main() {
    int arr[100];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Enter the elements of the array %d:", i+1);
        scanf("%d", &arr[i]);
    }

    sortArray(arr, size);

    
    return 0;
}

void sortArray(int arr[], int size){
    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}




