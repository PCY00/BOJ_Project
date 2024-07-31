#include <stdio.h>
#include <string.h>

int main()
{
    char str[255];
    int cnt = 0;
    
    while(1){
        gets (str, 255, stdin);
        
        for(int j = 0; str[j] != '\0'; j++){
            if(str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' || str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U'){
                cnt++;
            }
        }
        
        if(str[0] == '#'){
            break;
        }
        
        printf("%d\n", cnt);
        cnt = 0;
        // 'a', 'e', 'i', 'o', 'u'
        
    }

    return 0;
}
