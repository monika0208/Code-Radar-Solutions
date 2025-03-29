// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int a=a+64;
            printf("%c ",a);
            a+=1;
        }
        printf("\n");
    }
    return 0;
}