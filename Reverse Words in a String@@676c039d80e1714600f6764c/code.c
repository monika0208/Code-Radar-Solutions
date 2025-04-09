// Your code here...
#include<stdio.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("%s",str);
    return 0;
}