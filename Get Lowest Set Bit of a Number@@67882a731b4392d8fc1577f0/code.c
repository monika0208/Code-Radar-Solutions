#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    if (num == 0) {
        printf("No set bit found.\n");
    } else {
        printf("Lowest set bit: %d\n", num & -num);
    }

    return 0;
}
