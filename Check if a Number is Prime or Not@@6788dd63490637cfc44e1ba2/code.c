#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a <= 1) {
        printf("Not Prime");
        return 0;
    }

    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            printf("Not Prime");
            break;  // Exit immediately if a divisor is found
        }
    }

    printf("Prime");  // If no divisor was found, it's prime
    return 0;
}
