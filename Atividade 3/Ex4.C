#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    for(i = 10; i <= 100; i+=10)
        printf("%4d ", i);

    return 0;
}