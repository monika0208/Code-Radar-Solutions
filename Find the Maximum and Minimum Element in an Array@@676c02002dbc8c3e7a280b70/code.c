#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int min,max=arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        else{
            max=arr[i];
        }
        
        }
}