// Your code here...
#include<stdio.h>

int fibonacciSeries(int n){
    int a=0,b=1;
    printf("%d",a);
    for(int i=0;i<n;i++){
        printf("%d ",b);
        int next=a+b;
        a=b;
        b=next;
    }
}