#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }
    if(count>max){
        max=count;
    }
    printf("%d",max);
    return 0;
}