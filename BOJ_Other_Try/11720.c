#include <stdio.h>

int main()
{
    int N, sum = 0;
    
    scanf("%d", &N);
    
    char str[N];
    
    scanf("%s", str);
    
    for(int i = 0; i < N; i++){
        sum += ((int)str[i] - 48);
    }
    
    printf("%d", sum);
    
    return 0;
}
