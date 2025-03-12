// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int min=arr[0]-arr[1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int s=arr[i]-arr[j];
            if(s<min){
                min=s;


            }
        }
    }
    printf("%d",min);

    return 0;
}