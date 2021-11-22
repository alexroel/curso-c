#include <stdio.h>

int main(){
    char a = 'a';
    char A = 'A';
    // 0 -> Falso 
    // 1 -> Verdadero
    printf("%d \n", (a == 'a' && A == 'A'));
    printf("%d \n", (a == 'a' || A == 'a'));
    printf("%d \n", (!(a == 'b') && A == 'A'));
    return 0;
}