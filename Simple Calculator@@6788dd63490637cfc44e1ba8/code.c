#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;int b;char c;
    scanf("%d %d %c",&a,&b,&c);
    printf("%d %c %d ",a,c,b);
    return 0;
}