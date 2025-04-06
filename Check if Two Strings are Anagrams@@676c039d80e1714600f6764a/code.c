// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char org[100];
    scanf("%s",org);
    char str[100];
    scanf("%s",str);
    int n=strlen(str);
    for(int i=0,j=n-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    if(org==str){
        printf("Yes");
    }
    else{
        printf("No");
    }



    return 0;
}