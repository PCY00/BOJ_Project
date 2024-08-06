#include <stdio.h>
#include <string.h>

int main() {


    char str[100];

    fgets(str, 100, stdin);

    // 15 hello x3
    for (int i = 1; i <= strlen(str); i++) {
        printf("%c", str[i - 1]);
        if (i % 10 == 0) {
            printf("\n");
        }
    }
}
