// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int n=strlen(str);
    for(int i=0,j=n-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("%s",str);
    return 0;
}