#include <stdio.h>

int main(){
    //1 -> Verdadero 
    //0 -> Falso 
    int age = 51;

    if(age >= 18 && age <= 50){
        printf("Eres mayor de edad \n");
    }else if(age > 50){
        printf("Tienes mas de 50  \n");
    }else{
        printf("No eres mayor de edad \n");
    }
    

    return 0;
}