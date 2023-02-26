
#include <stdio.h>

int main()
{
    char a[] = "A3B1C1A1";
    int k = 8;
    
    for ( int i =0; i <k; i++){
        
        if (a[i+1] <60){
             for (int j =0; j < a[i+1]-48; j++){
                printf("%c",a[i]);
            }
        }
            
       
            
    }
    

    return 0;
}
