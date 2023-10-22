#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the times table of the input,
 * starting with 0.
 * @n: the value of the times tables to be printed.
 */

void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return; // Do nothing if n is out of the specified range
    }

    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", i, n, i * n);
    }
}

int main() {
    int n = 5; // Replace with the desired value of 'n'
    print_times_table(n);
    return 0;
}
