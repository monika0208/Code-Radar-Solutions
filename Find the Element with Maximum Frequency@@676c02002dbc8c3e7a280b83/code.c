#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=0;
    int max_el;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            max_el=arr[i];
        }

    printf("%d",max_el);
    return 0;
    }