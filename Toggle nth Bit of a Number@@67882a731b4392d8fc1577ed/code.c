#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";

int main() {
    int num, n;
    
    
    scanf("%d", &num);
    
    
    scanf("%d", &n);
    
    // Create a mask by left shifting 1 to the nth position
    int mask = 1 << n;
    
    // Toggle the nth bit using XOR (^) operation
    int updatedNum = num ^ mask;
    
    printf("%d\n", updatedNum);



    return 0;
}