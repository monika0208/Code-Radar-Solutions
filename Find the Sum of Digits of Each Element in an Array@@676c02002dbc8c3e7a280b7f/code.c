#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int sum=0;
        int num=abs(arr[i]);
        while(num>0){
        sum+=num%10;
        num=num/10;
        }
        printf("%d ",sum);
    }

    return 0;
}