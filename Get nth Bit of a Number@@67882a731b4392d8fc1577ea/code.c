#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;int n;
    scanf("%d %d",&num,&n);

    int mask =1<<n;

    if(num & mask){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
    return 0;
}