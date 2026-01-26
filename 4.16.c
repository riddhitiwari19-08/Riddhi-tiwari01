#include <stdio.h>

int main() {
    int total = 500, persons = 3;
    float share;

    share = (float)total / persons;
    printf("Each person pays = %.2f", share);

    return 0;
}
