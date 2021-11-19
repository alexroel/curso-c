#include <stdio.h>

int main(){
    int a = 20;
    int b = 10;
    int result;

    //Suma 
    result = a + b;
    printf("%d + %d = %d \n", a, b, result);

    //Resta 
    result = a - b;
    printf("%d - %d = %d \n", a, b, result);

    //Multiplicación 
    result = a * b;
    printf("%d x %d = %d \n", a, b, result);

    //División entera
    result = a / b;
    printf("%d / %d = %d \n", a, b, result);

    //División Real
    printf("5 / 2 = %.1f \n",(5/2.0));

    //División entera
    result = a % b;
    printf("%d mod %d = %d \n", a, b, result);
    printf("5 mod 2 = %d \n",(5%2));
    
    return 0;
}