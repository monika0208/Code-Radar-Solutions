#include <stdio.h>

char* welcome() {}
int main(){


    int num;int n;
    scanf("%d %d",&num,&n);

    
    // Create a mask by left shifting 1 to the nth position
    int mask = 1 << n;
    
    // Toggle the nth bit using XOR (^) operation
    int updatedNum = num ^ mask;
    
    printf("%d\n", updatedNum);



    return 0;
}