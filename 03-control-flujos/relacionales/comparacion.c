#include <stdio.h>

int main(){

    int a = 10;
    int b = 20;

    // 0 -> Falso 
    // 1 -> Verdadero 
    printf("%d > %d = %d \n", a,b,(a > b));
    printf("%d < %d = %d \n", a,b,(a < b));
    printf("%d >= %d = %d \n", a,b,(a >= b));
    printf("%d <= %d = %d \n", a,b,(a <= b));
    printf("%d igual que %d = %d \n", a,b,(a == b));
    printf("%d != %d = %d \n", a,b,(a != b));


    return 0;
}