// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int count=0;
    while(str[i]!='\0'){
        count+=1;
    }
    printf("%d",count);
    return 0;
}