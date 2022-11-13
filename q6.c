/**
 * file: q6.c
 * author: Shu Sian Lyu
 * description: program that creates allocates an array of integers,
 * frees them, and then tries to print the value of one of the element
 * of the array.
 * Q6: The program does not run. When using valgrind, it reports
 * "Invalid read" as the program is trying to access freed memory.
 */
#include <stdlib.h>
#include <stdio.h>

int main(){
    int *data = malloc(100 * sizeof(int));
    free(data);
    printf("%d\n", data[0]);
    return 0;
}