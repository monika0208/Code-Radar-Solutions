#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}


int main() {
    int num, n;
    

    scanf("%d", &num);
    
    printf("Enter the bit position to clear (0-based index): ");
    scanf("%d", &n);
    
    // Create a mask by left shifting 1 to the nth position and negating it
    int mask = ~(1 << n);
    
    // Clear the nth bit using bitwise AND with the mask
    int updatedNum = num & mask;
    
    printf("%d\n", n, updatedNum);


    return 0;
}