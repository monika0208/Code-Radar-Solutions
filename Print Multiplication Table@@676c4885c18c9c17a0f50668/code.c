#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d %d %d",n,i,n*i);
    }
    return 0;
}