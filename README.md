# C training

# C Programming Assignment: Array Manipulation and Analysis

## Objective

Create a program that performs various operations on an array of integers, focusing on generic programming logic.

## Requirements

The program should include the following functionalities:

1. Input an array of integers from the user
2. Calculate and display the sum of all elements
3. Find and display the maximum and minimum values
4. Calculate and display the average of all elements
5. Reverse the array and display the result
6. Search for a specific element and display its position(s)
7. Sort the array in ascending order and display the result

## Concepts Covered

- Array manipulation
- Loops (for input, output, and calculations)
- Conditional statements
- Basic algorithms (searching, sorting)
- Function implementation

## Program Structure

```c
#include <stdio.h>

#define MAX_SIZE 100

void inputArray(int arr[], int *size);
void displayArray(int arr[], int size);
int sumArray(int arr[], int size);
void findMinMax(int arr[], int size, int *min, int *max);
float calculateAverage(int arr[], int size);
void reverseArray(int arr[], int size);
void searchElement(int arr[], int size, int element);
void sortArray(int arr[], int size);

int main() {
    int arr[MAX_SIZE];
    int size, choice;

    // Input array
    inputArray(arr, &size);

    // Menu for operations
    do {
        // Display menu options
        // Get user choice
        // Perform selected operation
    } while (choice != 0);

    return 0;
}

// Implement the functions here
```
