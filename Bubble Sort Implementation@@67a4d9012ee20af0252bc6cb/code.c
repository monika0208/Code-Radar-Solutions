// Your code here...
#include<stdio.h>

void bubblesort(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
            printf("%d",min);
        }
    }
    return 0;
}