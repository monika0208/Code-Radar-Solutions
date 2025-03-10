#include<stdio.h>

int isPrime(int num,int t){
    for(int i=0;i<t;i++){
    for(int j=2;j<num;j++){
        if(num%j==0){
            return 0;
        }
    }
    }
    return 1;
}