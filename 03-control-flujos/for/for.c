#include <stdio.h>

int main(){
    
    for (int i = 0; i <= 10; i++){
        printf("%d \n", i);
    }

    for (int a = 0, b = 10; a <= 10; a++, b--){
        printf("%d - %d \n", a, b);
    }

    return 0;
}