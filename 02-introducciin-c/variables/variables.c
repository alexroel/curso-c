#include <stdio.h>

int main(){

    int num1;
    float time, size, pi;
    num1 = 10;
    time = 20; //20.000
    size = 1.67;
    pi = 3.141592;
    short a = 100;
    double b = 300.27;
    char c = 'C';

    printf("int Num1: %ld Bytes \n", sizeof(num1));
    printf("float Time: %ld Bytes\n", sizeof(time));
    printf("short a: %ld Bytes\n", sizeof(a));
    printf("double b: %ld Bytes\n", sizeof(b));
    printf("char c: %ld Bytes\n", sizeof(c));
/*
    printf("Num1: %d \n", num1);
    printf("Time: %.0f \nSize: %f\n PI: %f \n",time, size, pi);

    printf("-A: %d -B: %f -C: %c \n", a,b,c);

    float x = 8.487;
    printf("Valor de x: %.2f \n",x);
*/
    return 0;
}