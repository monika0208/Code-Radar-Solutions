// Your code here...
#include<stdio.h>

int main(){
    int n;
    int sorted=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            sorted=1;
        }
    }
    if(sorted){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    if(n==1){
        printf("Not Sorted");
    }
    return 0;
}
