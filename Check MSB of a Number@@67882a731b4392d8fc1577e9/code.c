#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);

    int bits=sizeof(a)*8;
    int msb=1<<(bits-1);

    if((a&msb)!=0){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}