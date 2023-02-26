

#include <stdio.h>

int main()
{
    char a[] ="ABCabcABC";
    int l =9;
    int shift =4;
    char b;
    
    for(int i =0;i <shift;i++){
        for(int j =0;j <l-1;j++){
            b = a[j];
            a[j] = a[j+1];
            a[j+1] = b;
        }
    }
    printf("%s",a);
    
    

    return 0;
}
