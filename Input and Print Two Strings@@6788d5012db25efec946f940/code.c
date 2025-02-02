#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[100];
    fgets(a,sizeof(a),stdin);
    printf("You entered: %s and %s",a,a);
    return 0;
}