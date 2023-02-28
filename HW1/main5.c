

#include <stdio.h>

int main()
{
    int l =20;
    char a[] ="-9 8 7 6 5 -4 3 -2 1";
    int i =4;
    char turn;
    
        
        
  for ( int j =0; j <l;j++){
         if( a[j] ==45){
            int t =a[j+1]*-1;
            a[j+1] =t;
            a[j] =" ";
            }
        }for ( int j =1; j <l;j+=2){
            if (a[j] ==32){
                j++;
            }
           
            for ( int k =j+2; k <l; k+=2){
                if ( a[j] <a[k]){
                    turn =a[k-2];
                    a[k-2] =a[k];
                    a[k] =turn;
            }
        }
    }
  
    printf("%d",a[i*2-1]-48);

    return 0;
}
