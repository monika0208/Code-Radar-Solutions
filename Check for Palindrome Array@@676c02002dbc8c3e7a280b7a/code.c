// Your code here...
#include<stdio.h>

int ispalindrome(int arr[],int n){
    int i,j;
    for(int i=0,j=n-1;i<j;i++,j--){
        if(arr[i]!=arr[j]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    if(ispalindrome(arr,n)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;

}






// #include<stdio.h>


// int reverse(int arr[],int a,int b){
//     while(a<b){
//         int temp=arr[a];
//         arr[a]=arr[b];
//         arr[b]=temp;
//         a++;
//         b--;
//     }
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     reverse(arr,n);
//     if(reverse(arr,n)==arr[i]){
    
//     }
// }