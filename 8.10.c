#include <stdio.h>
#include <string.h>

int main() {
    char *arr[5] = {"apple", "orange", "banana", "kiwi", "mango"};
    char *temp;
    int i, j;

    // Bubble sort to sort the array of pointers to strings
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {  // j starts from i + 1
            if (strcmp(arr[i], arr[j]) > 0) {  // Compare strings lexicographically
                // Swap the pointers if the strings are out of order
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print the sorted array of strings
    printf("Sorted strings:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
