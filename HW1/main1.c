
#include <stdio.h>

int main()
{
    char a[]="AABBBCCddd";
    int k =1;
    for(int i =0;i <10;i++){
        if (a[i] ==a[i+1]){
            k++;
        }else{
            printf("%c%d",a[i],k);
            k =1;
        }
    }
    return 0;
}
