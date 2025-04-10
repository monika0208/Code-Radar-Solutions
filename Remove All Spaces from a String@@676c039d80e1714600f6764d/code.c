// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    scanf("%s",str1);
    char str2[100];
    scanf("%s",str2);
    char str3[100];
    scanf("%s",str3);
    strcat(str1,str2,str3);
    printf("%s",str1);
    return 0;
}

