// Your code here...
#include <stdio.h>

int main() {
    int N;
    
    // Read the number of elements
    scanf("%d", &N);
    
    int arr[N], freq[N];

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array
    }

    // Calculate frequency of each element
    for (int i = 0; i < N; i++) {
        if (freq[i] == -1) { // Process only uncounted elements
            int count = 1;
            for (int j = i + 1; j < N; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // Mark duplicate elements as counted
                }
            }
            freq[i] = count; // Store frequency for unique elements
        }
    }

    // Print unique elements with their frequency
    for (int i = 0; i < N; i++) {
        if (freq[i] != 0) {
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

//     return 0;
}