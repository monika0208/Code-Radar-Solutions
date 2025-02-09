#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main(){
    int num;isPrime=1;
    scanf("%d",&num);
    if(num<=1){
        printf("Not Prime");

    }
    for(int i=2,i*i<=num,i++){
        if(num%i==0){
            isPrime=0;
            break;
    }

    if(isPrime){
        printf("Prime");
    }
    else{
        print("Not Prime");
    }
    return 0;
}}