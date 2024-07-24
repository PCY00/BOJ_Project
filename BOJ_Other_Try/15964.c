#include <stdio.h>

long long int cal(long long int a, long long int b);

int main()
{
    long long int num1 = 0, num2 = 0;

    scanf("%lld %lld", &num1, &num2);
    
    long long int result = cal(num1, num2);
    
    printf("%lld", result);
    return 0;
}


//(A+B)×(A-B)
long long int cal(long long int a, long long int b){
    long long int c = a + b;
    long long int d = a - b;
    return c * d;
}
