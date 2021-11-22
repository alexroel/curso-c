#include <stdio.h>

int main(){

    int num = 45;

    switch(num){
    case 1:
        printf("Uno \n");
        break;
    case 2:
        printf("Dos \n");
        break;
    case 3:
        printf("Tres \n");
        break;
    case 4:
    case 5:
        printf("Cuatro o Cinco \n");
        break;
    default:
        printf("No se encontro el número \n");
        break;
    }


    return 0;
}