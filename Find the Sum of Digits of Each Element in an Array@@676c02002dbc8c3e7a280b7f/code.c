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
        while(abs(arr[i]>0)){
        sum+=arr[i]%10;
        arr[i]=arr[i]/10;
        }
        printf("%d ",sum);
    }

    return 0;
}