// Your code here...
#include <stdio.h>

int main() {
    int N;
    
    // Read the number of elements
    scanf("%d", &N);
    
    int arr[N];
    
    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize min and max with the first element
    int min = arr[0], max = arr[0];

    // Iterate through the array to find min and max
    for (int i = 1; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Print the minimum and maximum values
    printf("%d %d\n", min, max);

//     return 0;
}