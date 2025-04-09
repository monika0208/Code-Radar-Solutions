// Your code here...
#include<stdio.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        count+=1;
        i++;
    }
    printf("%d",count);
    return 0;
}