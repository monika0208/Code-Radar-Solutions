// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    int prime;

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        for(int j=2;j<arr[i];j++){
            if(arr[i]!=2 && arr[i]%j==0){
                prime=0;
                break;
            }
            else{
                prime=1;
                count+=1;
            }
        }
    
        
    }
    printf("%d",count);

    return 0;
}