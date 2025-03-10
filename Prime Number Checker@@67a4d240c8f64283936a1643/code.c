#include<stdio.h>

void isPrime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            printf("0");
            break;
        }
    }
    printf("1");
}