// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(str[i]==str[j]){
                printf("%c",str);
                break;
            }
        }
    }
    return 0;
}