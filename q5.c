/**
 * file: q5.c
 * author: Shu Sian Lyu
 * description: program that creates an array of integers
 * called data of size 100 using malloc.
 * Q5: The valgrind shows that Invalid write of size 4
 * at 0x10916D: main as it is out of bonds access. Hence,
 * the program is not correct.
 */
#include <stdlib.h>
int main(){
    int *data = malloc(100 * sizeof(int));
    data[100] = 0;

    return 0;
}