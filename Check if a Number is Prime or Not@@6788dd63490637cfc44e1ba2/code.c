#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    for(int i=2;int i<a;i++){
        if(a%i==0){
            printf("Not Prime");
            break;
        }
        else{
            printf("Prime");
        }
    
    return 0;
    }
}




