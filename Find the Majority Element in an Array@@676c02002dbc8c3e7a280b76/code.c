#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
        if(arr[i]==arr[j]){
            count+=1;
        }
        }
        if(count>n/2){
            printf("%d",arr[i]);
            return 0;
        }


    }
    printf("-1");
    return 0;
}