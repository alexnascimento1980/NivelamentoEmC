#include <stdio.h>

void calcula(int* c) {
    printf("calcula %d %d\n", (*c), c);
    (*c)++;

    printf("calcula %d %d\n", (*c), c);
}

int main() {
    int c = 10;
    
    printf("O valor de c em main e %d %d\n", c, &c);
    calcula(&c);
    printf("O valor de c em main e %d %d\n", c, &c);
}

