#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    printf("Average: %.2f",(a+b+c)/3);
    printf("%d",a);
    return 0;
}