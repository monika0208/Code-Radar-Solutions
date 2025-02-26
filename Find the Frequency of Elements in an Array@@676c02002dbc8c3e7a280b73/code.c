// Your code here...
#include<stdio.h>

int main(){
    int n;
    int arr[n];
    int count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                count+=1;
                printf("%d",count);
            }
        }
    }
    return 0;
}