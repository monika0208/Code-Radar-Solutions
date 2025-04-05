// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        count+=1;
        i++;
    }
    printf("%d",count);
    return 0;
}