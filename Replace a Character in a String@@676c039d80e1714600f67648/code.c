// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char n;
    scanf("%c",&n);
    char a;
    scanf("%c",&a);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]==n){
            str[i]=a;
        }

    }
    printf("%s",str);
    return 0;
}