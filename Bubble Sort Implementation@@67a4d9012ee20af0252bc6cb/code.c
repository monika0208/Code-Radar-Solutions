// Your code here...
#include<stdio.h>

void bubbleSort(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
}

void printArray(int arr[],int n){
    bubbleSort(arr,n);
    printf("%d",min);
}