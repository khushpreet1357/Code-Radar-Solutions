#include <stdio.h>
#include <string.h>

int main() {
    int n, shift;
    char num[100];

    // Read input values
    scanf("%d", &n);
    scanf("%s", num);
    scanf("%d", &shift);

    // Circular rotation logic
    shift = shift % n; // In case shift > n
    char rotated[100];

    // Move last 'shift' characters to the front
    int j = 0;
    for (int i = n - shift; i < n; i++) {
        rotated[j++] = num[i];
    }
    for (int i = 0; i < n - shift; i++) {
        rotated[j++] = num[i];
    }
    rotated[j] = '\0'; // Null-terminate the string

    // Print the rotated number
    printf("%s\n", rotated);

    return 0;
}
