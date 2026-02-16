#include <stdio.h>

int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Sum of array = %d\n", sumArray(arr, 5));
    return 0;
}
