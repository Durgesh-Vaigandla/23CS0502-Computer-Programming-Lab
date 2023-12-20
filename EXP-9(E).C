#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;

    // Initial memory allocation
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // Reallocating memory
    int newSize;
    printf("Enter the new size: ");
    scanf("%d", &newSize);

    ptr = (int *)realloc(ptr, newSize * sizeof(int));

    if (ptr == NULL) {
        printf("Memory reallocation failed.\n");
        return 0;
    }

    printf("Enter %d elements:\n", newSize);
    for (i = n; i < newSize; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("Elements in the array after reallocation:\n");
    for (i = 0; i < newSize; i++) {
        printf("%d ", ptr[i]);
    }

    // Freeing memory
    free(ptr);

    return 0;
}
