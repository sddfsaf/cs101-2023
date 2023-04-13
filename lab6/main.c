

#include <stdio.h>


int multi( int i, int j){
    if ( j ==10){
        
        return 0;
    } else if ( i==9){
        printf("%d*%d=%d\n", j,i,i*j);
        multi(i-8,j+1);
    } else{
        printf("%d*%d=%d\t", j,i,i*j);
        multi(i+1 ,j);
    }
    
}

int main()
{
    multi(1,1);
    return 0;
}
