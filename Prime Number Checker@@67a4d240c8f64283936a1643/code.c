#include<stdio.h>

void isPrime(int num,int t){
    for(int i=0;i<t;i++){
    for(int j=2;j<num;i++){
        if(num%j==0){
            return 0;
            break;
        }
    }
    }
    return 1;
}