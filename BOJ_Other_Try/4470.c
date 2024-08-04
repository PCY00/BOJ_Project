#include <stdio.h>

int main() {

    int num = 0;
    scanf("%d", &num);
    getchar();

    char str[52];

    for (int i = 0; i < num; i++) {


        fgets(str, sizeof(str), stdin);
        //printf("%s", str);

        printf("%d. %s", i + 1, str);
    }

}
