#include <stdio.h>

int main() {
    double value;
    printf("Enter the initial value: ");
    scanf("%lf", &value);

    // Perform the multiplication recursively 15 times
    for (int i = 1; i <= 15; ++i) {
        value *= 1.5;
        printf("Round %d: %.2f\n", i, value);
    }

    return 0;
}
