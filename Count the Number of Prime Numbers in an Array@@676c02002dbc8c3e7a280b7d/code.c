#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int prime=1;
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=2;i<n,j<arr[i];i++,j++){
        if(arr[i]%j==0){
            prime=0;
            break;
        }
        else{
            prime=1;
            count+=1;
        }
    }

    if(prime){
        printf("%d",count);
    }
    return 0;
}