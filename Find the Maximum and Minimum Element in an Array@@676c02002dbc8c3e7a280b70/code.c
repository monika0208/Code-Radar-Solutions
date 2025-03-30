#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int min=arr[0];
    int max=__INT_MIN__
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        else{
            max=arr[i];
        }
        
        }
}