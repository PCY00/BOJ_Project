#include <stdio.h>
int arr0[41];
int arr1[41];

int main(void) {
    int T, n, i;
    arr0[0] = 1;
    arr1[0] = 0;
    scanf_s("%d", &T);
    for (int i = 1; i < 41; i++) {
        arr0[i] = arr1[i - 1];
        arr1[i] = arr0[i - 1] + arr1[i - 1];
    }
    for (i = 0; i < T; i++) {
        scanf_s("%d", &n);
        printf("%d %d\n", arr0[n], arr1[n]);
    }
    return 0;
}