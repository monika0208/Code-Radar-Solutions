// Your code here...
#include<stdio.h>

int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                count+=1;
            }
        }
        printf("%d",count);
    }
    return 0;
}