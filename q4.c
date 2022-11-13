/**
 * file: q4.c
 * author: Shu Sian Lyu
 * description: program that demonstrates memory leak
 * Q4: The valgrind shows that 4 bytes of memory are definitely lost,
 * which indicates the caller never frees the memory after it is finished.
 */
#include <stdlib.h>

int main(){
    int *ptr = malloc(sizeof(int));

    return 0;
}