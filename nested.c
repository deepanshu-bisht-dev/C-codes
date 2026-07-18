#include <stdio.h>

int main() {
     int num = 10;
    if (num > 0) {
        printf("The number is positive.\n");
        if (num % 2 == 0) {
            printf("The number is even.\n");
        } else {
            printf("The number is odd.\n");
        }

    } else {
        printf("Number is not positive.\n");
    }

    return 0;
}
