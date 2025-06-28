#include <stdio.h>

int main() {
    int num;
    printf("Input decimal number: ");
    scanf("%d", &num);

    // Step 1: Find highest bit position
    int topBit = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            topBit = i;
            break;
        }
    }

    printf("Binary number: ");
    for (int i = topBit; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0 && i != 0) {
            printf(" ");
        }
    }

    // Handle 0 input case
    if (num == 0)
        printf("0");

    printf("\n");
    return 0;
}
