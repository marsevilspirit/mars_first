#include <stdio.h>
#include <stdlib.h>

typedef int (*Predicate)(int);

int *filter(int *array, int length, Predicate predicate, int *resultLength) {
    int *result = (int *)malloc(length * sizeof(int));
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (predicate(array[i])) {
            result[count++] = array[i];
        }
    }
    *resultLength = count;
    return result;
}

int isPositive(int num) {
    return num > 0;
}

int main(void) {
    int array[] = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
    int length = sizeof(array) / sizeof(array[0]);
    int resultLength;
    int *filteredNumbers = filter(array, length, isPositive, &resultLength);
    for (int i = 0; i < resultLength; i++) {
        printf("%d ", filteredNumbers[i]);
    }
    printf("\n");
    free(filteredNumbers);
    return 0;
}