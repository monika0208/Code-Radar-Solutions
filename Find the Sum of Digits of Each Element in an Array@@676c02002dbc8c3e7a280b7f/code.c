#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i]%10;
        arr[i]=arr[i]/10;
    }
    printf("%d",sum);
    return 0;
}