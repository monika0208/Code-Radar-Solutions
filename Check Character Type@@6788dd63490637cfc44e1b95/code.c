#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char f;
    scanf("%c",&f);
    if(f=='a'){
        printf("Vowel");
    }
    else if(f=='z'){
        printf("Consonant");
    }
    
    else if(f=='5'){
        printf("Digit");
    }
    return 0;
}