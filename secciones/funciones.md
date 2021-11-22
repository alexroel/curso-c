# Funciones 

1. [Declaración de Funciones]
2. [Funcion con retorno]
3. [Alcance de variables]
4. [Variables Estáticas]
5. [Funciones recursivas]

---
## Declaración de Funciones 

Las funciones son fundamentales para la programación en C y se utilizan para lograr una solución de programa como una serie de subtareas.
A estas alturas ya sabe que cada programa en C contiene una función main (). Y está familiarizado con la función printf ().

También puede crear sus propias funciones.
Una función:
- Es un bloque de código que realiza una tarea específica
- Es reutilizable
- Hace que un programa sea más fácil de probar
- Se puede modificar sin cambiar el programa de llamada

Declaración de variables 
~~~c
// Declarar una funcion 
void saludar();

int main(){
    
    return 0;
}
~~~

Definición de variable 
~~~c
// Declarar una funcion 
void saludar();

int main(){
    
    return 0;
}

//Definición de funcion 
void saludar(){
    printf("Hola desde la función saludar \n");
}
~~~

Ejecutar o llamar variables 
~~~c
// Declarar una funcion 
void saludar();

int main(){
    //Llamada de una función
    saludar();
    
    return 0;
}

//Definición de funcion 
void saludar(){
    printf("Hola desde la función saludar \n");
}
~~~
---
## Funcion con retorno 
La declaración de retorno se utiliza para enviar un valor a la declaración de llamada.

### Declaración de una función con parametros. 
Los parámetros de una función se utilizan para recibir los valores requeridos por la función. Los valores se pasan a estos parámetros como argumentos a través de la llamada a la función.
}
~~~c
//Declaración
int suma(int a, int b);
//Definición de funcion 

int main(){
    int result;
    //Llamada de una función
    result = suma(4,10);
    printf("La suma es: %d \n", result);
    
    return 0;
}

int suma(int a, int b){
    return a + b;
}
~~~

---
## Alcance de variables
El alcance variable se refiere a la visibilidad de las variables dentro de un programa.

Las variables declaradas en una función son locales a ese bloque de código y no se puede hacer referencia a ellas fuera de la función.

Las variables declaradas fuera de todas las funciones son globales para todo el programa.
~~~c
//Variable Global 
int global1 = 0;

int main(){
    //Variables locales 
    int local1, local2;
    
    return 0;
}
~~~
---
## Variables Estáticas 
Las variables estáticas tienen un alcance local pero no se destruyen cuando se sale de una función. Por lo tanto, una variable estática conserva su valor durante la vida útil del programa y se puede acceder a ella cada vez que se vuelve a ingresar la función.

~~~c
#include <stdio.h>

// Declarar una funcion 
void hola_num();

int main(){
    for (int i = 0; i < 5; i++){
        hola_num();
    }
      
    return 0;
}

//Definición de funcion 
void hola_num(){
    //Variable estática
    static int num = 1;

    printf("Hola numero %d \n", num);
    num++;
}
~~~

## Funciones recursivas 
Una función recursiva es aquella que se llama a sí misma e incluye un caso base o condición de salida , para finalizar las llamadas recursivas.

~~~c
#include <stdio.h>

// Declarar una funcion 
int factorial(int num);

int main(){
    int result;

    //Llamada de una función
    result = factorial(5);
    printf("Resultado: %d \n", result);
      
    return 0;
}

//Definición de funcion 
int factorial(int n){
    if (n == 1){
        return 1;
    }else{
        return (n * factorial(n - 1));
    }
    
}
~~~

