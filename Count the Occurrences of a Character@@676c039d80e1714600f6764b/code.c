// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    char n;
    scanf("%c",&n);
    int count=0;
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]==n){
            count++;
        }

    }
    printf("%d",count);
    return 0;
}