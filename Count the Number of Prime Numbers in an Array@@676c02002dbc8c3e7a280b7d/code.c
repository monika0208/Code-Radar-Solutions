#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int prime=1;
        if(arr[i]<2){
            continue;
        }
        else{
            for(int j=2;j<arr[i];j++){
                if(arr[i]%j==0){
                    prime=0;
                    break;

                }
                else{
                    count+=1;
                }
            }
            printf("%d",count);
        }
    }
    return 0;
}