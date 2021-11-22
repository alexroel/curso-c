#include <stdio.h>

int main(){
    int num = 0;

    while(num <= 10){ 
        num++;

        if (num == 5){
            printf("Salta al siguiente \n");
            continue;
            //printf("Fin del programa \n");
            //break;
        }
        printf("%d \n", num);
    }
    return 0;
}