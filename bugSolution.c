#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int)); // Dynamically allocate memory
    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    *ptr = 10;
    printf("Value: %d\n", *ptr);
    free(ptr); // Correctly free the allocated memory
    ptr = NULL; // Set pointer to NULL to prevent dangling pointer
    return 0;
} 