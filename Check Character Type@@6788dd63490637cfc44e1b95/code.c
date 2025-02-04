#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char f;
    scanf("%c",&f);
    if(f=='a'||'e'||'i'||'o'||'u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}