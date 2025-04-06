// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);
    printf("%s",strcat(str1,str2));
    return 0;
}
