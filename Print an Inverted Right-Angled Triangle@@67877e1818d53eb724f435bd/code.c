#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1;j<n+1-i;j++){
            printf("* ");
        }
        printf("\n");
    }
}