// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int isPalindrome=1;
    for(int i=0,j=n-1;i<=j;i++,j--){
        if(str[i]!=str[j]){
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}