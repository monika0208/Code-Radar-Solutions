#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);
    if(num<=1){
        printf("Not Prime");

    }
    for(int i=2,i*i<=num,i++){
        if(num%i==0){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
    return 0;
}