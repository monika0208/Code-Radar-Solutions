// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    scanf("%s",str1);
    char str2[100];
    scanf("%s",str2);
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}

