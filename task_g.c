#include <stdio.h>
#include <stdlib.h>
#include "task_g.h"

int main(void) {
    // Your code below here
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return EXIT_FAILURE;
    }
    double numbers[20];
    int i = 0;
    while (fscanf(file, "%lf", &numbers[i]) == 1) {
        i++;
    }
    fclose(file);
    double max;
    find_max_less_than_10(numbers, 20, &max);
    if (max != -1) {
        printf("%.2f\n", max);
    } else {
        printf("Error!\n");
    }
    return 0;
}