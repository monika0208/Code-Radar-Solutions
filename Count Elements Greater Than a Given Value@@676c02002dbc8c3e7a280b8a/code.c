// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a;
    scanf("%d",&a);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>a){
            count+=1;
        }

    }

    printf("%d",count);
    return 0;
}