#include<stdio.h>

void bubbleSort(int arr,int n,int i;int j){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void printArray(int arr,int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}