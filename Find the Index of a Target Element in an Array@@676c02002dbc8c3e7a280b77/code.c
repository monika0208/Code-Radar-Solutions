// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int t;
    scanf("%d",&t);

    for(int i=0;i<n;i++){
        if(arr[i]==t){
            printf("%d",i);
        }
        else{
            printf("-1");
            return 0;
        }
    }

    return 0;
}