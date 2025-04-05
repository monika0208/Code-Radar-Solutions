// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char str[];
    fgets(str);
    int n=strlen(str);
    for(int i=0,j=n-1;i<=j;i++,j--){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);
    return 0;
}