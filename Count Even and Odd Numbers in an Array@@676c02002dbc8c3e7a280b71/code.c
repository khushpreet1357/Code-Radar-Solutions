// Your code here...
#include <stdio.h>

int main() {
    int N;
    
    // Read the number of elements
    scanf("%d", &N);
    
    int arr[N];
    int evenCount = 0, oddCount = 0;

    // Read the array elements and count evens and odds
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Print the count of even and odd numbers
    printf("%d %d\n", evenCount, oddCount);

//     return 0;
}