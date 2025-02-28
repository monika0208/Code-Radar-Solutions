// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count+=1;
                
            }
        
        }
    if(count>n/2){
        printf("%d",arr[i]);
    }
    else{
        printf("-1");
    }
    return 0;
    }
    
    }