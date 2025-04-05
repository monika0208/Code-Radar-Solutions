// Your code here...
#include<stdio.h>

int main(){
    char str[100];
    scanf("%c",str);
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]=='a' ||str[i]=='e'||str=='i'||str[i]=='o'||str[i]=='u'){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}