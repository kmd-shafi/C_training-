# include <stdio.h>
int sumArray(int arr[], int size);
int main(){
    int arr[100];
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++){
        printf("Enter the elements of the array %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int sum = sumArray(arr, size);
    printf("The sum of the array is: %d\n", sum);
    return 0;
}

int sumArray(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}