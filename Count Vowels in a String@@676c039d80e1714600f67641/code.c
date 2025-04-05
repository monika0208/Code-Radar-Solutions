// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int count=0;
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if(str[i]=='a' ||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}