// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int n;
    scanf("%c",&n);
    int a;
    scanf("%c",&a);
    int l=sizeof(str);
    for(int i=0;i<l;i++){
        if(str[i]==n){
            str[i]=a;
        }

    }
    printf("%s",str);
    return 0;
}