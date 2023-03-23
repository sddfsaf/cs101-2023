

#include <stdio.h>

void replcr_all(char *str, char oldChar, char newChar){
    while(*str){
        if ( *str == 'a'){
            *str = newChar;
        }
        *str++;
    }
}

int main()
{
    char str[100], oldChar = 'a', newChar='A';
    printf("Enter anr string: ");
    scanf("%s",str);
    
    printf("%s\n",str);
    replcr_all(str, oldChar, newChar);
    printf("%s\n",str);
    return 0;
}
