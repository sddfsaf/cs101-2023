
#include <stdio.h>

typedef int (*calc_fun)(int, int);

int add(int x,int y){
    return x+y;
}
int sub(int x,int y){
    return x-y;
}
int mul(int x,int y){
    return x*y;
}
int div(int x,int y){
    return x/y;
}
int calc( calc_fun calc_ptr, int x, int y){
    return calc_ptr( x, y);
}

int main()
{
    printf("sum = %d\n", calc(add,4,2));
    printf("dif = %d\n", calc(sub,4,2));
    printf("spraduct = %d\n", calc(mul,4,2));
    printf("quotient = %d\n", calc(div,4,2));

    return 0;
}



