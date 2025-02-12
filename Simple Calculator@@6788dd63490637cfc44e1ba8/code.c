#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;int b;char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case'+':
        printf("%d",a+b);
        break;
        case'-':
        printf("%d",a-b);
        break;
        case'*':
        printf("%d",a*b);
        break;
        case'/':
        printf("%d",a/b);
        default:
        printf("error");
    }
    return 0;
}