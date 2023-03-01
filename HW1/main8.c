

#include <stdio.h>

int main()
{
    char a[] ="Hello";
    int l =5;
    char turn;
    
    printf ("%s\n",a);
    if ( a[0] >96 && a[l-1] <91){
        turn =a[0];
        a[0] =a[l-1]+32;
        a[l-1] =turn-32;
    }else if ( a[l-1] >96 && a[0] <91){
        turn =a[0];
        a[0] =a[l-1]-32;
        a[l-1] =turn+32;
    }else if ( a[0] && a[l-1] <91){
        turn =a[0];
        a[0] =a[l-1];
        a[l-1] =turn;
    }else {
        turn =a[0];
        a[0] =a[l-1];
        a[l-1] =turn;
    }
    printf ("%s",a);

    return 0;
}
