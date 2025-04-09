#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    char n, a;
    scanf("%c", &n);  // Space before %c to skip newline
    scanf("%c", &a);

    int l = strlen(str);
    for (int i = 0; i < l; i++) {
        if (str[i] == n) {
            str[i] = a;
        }
    }

    printf("%s", str);
    return 0;
}
