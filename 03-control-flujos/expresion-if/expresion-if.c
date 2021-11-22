#include <stdio.h>

int main(){
    int a;
    int b = 3;

    a = (b >= 5) ? 5 :b;
/* 
    if(b >= 5)
        a = 5;
    else
        a = b;
*/
    printf("El valor es: %d \n", a);

    return 0;
}