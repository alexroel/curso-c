# Introducción a C

1. [Tipo de datos](#tipo-de-datos)
2. [Variables](#variables)
3. [Salida de datos](#salida-de-datos)
4. [Operador sizeof](#operador-sizeof)
5. [Entrada de datos](#entrada-de-datos)
6. [Constantes](#constantes)
7. [Operadores Aritméticos](#operadores-aritméticos)
8. [Math](#math)

---

## Tipo de datos

- Números Enteros 
    - Positivos y negativos 
        - `int` 4 Bytes `-2,147,483,648 a 2,147,483,647`
        - `short` 2 Bytes `-32,768 a 32,767`
        - `long` 8 Bytes `-92,23,372,036,854,775,808 a -92,23,372,036,854,775,807`
    - Enteros positivos 
        - `unsigned int` 4 Bytes `0 a 4,294,967,295`
        - `unsignet short` 2 Bytes `0 a 65,535`
        - `unsignet long` 8 Bytes `0 a 18,446,744,073,709,551,615`

- Números com punto flotante
    - `float` 4 Bytes `1.2E-38 a 3.4E+38` 6 digitos decimales 
    - `double` 8 Bytes `2.3E-308 a 1.7E+308` 15 digitos decimales 
    - `long double` 10 Bytes `3.4E-4932 a 1.1E+4932` 19 digitos decimales 
- Caracter 
    - `char` 1 Bytes
- Void 
    - Como su nombre indica, `void` internamente no almacena nada. `void` La palabra clave se utiliza para definir un tipo de retorno de función o un puntero genérico.

--- 

## Variables 
Las variables se utilizan para representar alguna cantidad conocida o desconocida en la memoria. Las variables son el nombre referencial que se le da a la ubicación de la memoria que contiene los datos de nuestro programa.

### Declarar Variables 
En el lenguaje de programación C, debe declarar una variable antes de usarla. La declaración de variable informa al compilador sobre el nombre de referencia que estamos usando para una ubicación de memoria.

`<tipo de dato> <nombre de variable>;`

Declarar un variable 

~~~ c
int num1;
~~~

Declarar variables multiples 

~~~ c
float time, size, pi;
~~~

### Inicializar variables 
En el momento de la definición de la variable, el compilador de C asigna un bloque de bytes en la memoria de cierto tipo. Inicialmente, la memoria asignada contiene valor basura .

~~~ c
num1 = 10;
time = 20;
size = 1.67;
pi = 3.141592;
~~~

### Variables inicializadas 
También puede inicializar una variable en el momento de su declaración. La variable inicializada en el momento de su declaración se denomina variable inicializada de valor .
~~~ c
short a = 100;
double b = 300.27;
char c = 'C';
~~~
---
## Salida de datos 
C proporciona un archivo de encabezado stdio.h(entrada y salida estándar) que contiene varias funciones de entrada / salida. Para realizar cualquier operación de E / S, debe agregar una declaración de inclusión en la parte superior de su código C.

Mostrar valores de una variable y tipos de  datos en la consola. 
- `%d` para números enteros 
- `%f` para números flotantes 
- `%.2f` para mostrar con una cantidad de digitos decimales 
- `%u` para números enteros positivos 
- `%c` para tipo de datos `char`
- `%s` para cadena de caracteres
- `\n` nueva linea 

~~~ c
//Salida de datos 
printf("Num1: %d \n", num1);
printf("Time: %f \nSize: %f \nPI: %f \n", time, size, pi);

printf("-A: %d -B: %f -C: %c", a,b,c);
~~~

Mejorar la salida de un número flotante. Ejemplo sin la mejora. 
~~~ c
float x = 8.487;
printf("Valor de x: %f \n", x);
~~~

~~~sh
Valor de x: 8.487000
~~~

~~~ c
float x = 8.487;
printf("Valor de x: %.2f \n", x);
~~~

~~~sh
Valor de x: 8.49
~~~

---

## Operador sizeof
C tiene un operador sizeof incorporado que proporciona los requisitos de memoria para un tipo de datos en particular. Por ejemplo :

~~~ c
 //sizeof 
printf("int Num1: %ld \n", sizeof(num1));
printf("float time: %ld \n", sizeof(time));
printf("short a: %ld \n", sizeof(a));
printf("double b: %ld \n", sizeof(b));
printf("char c: %ld \n", sizeof(c));
~~~

---

## Entrada de datos
###  getchar()
C admite varias formas de recibir información del usuario.
`getchar()` Devuelve el valor de la siguiente entrada de un solo carácter.

~~~ c
#include <stdio.h>

int main(){

    printf("Ingrese:");
    char c = getchar();

    putchar(c);

    return 0;
}
~~~

### gest()
La función `gets()` se usa para leer la entrada como una secuencia ordenada de caracteres, también llamada cadena . Una cadena se almacena en una matriz de caracteres.

~~~ c
#include <stdio.h>

int main(){
    
    char c[100];

    printf("Ingrese:");
    gets(c);

    //Salida de datos 
    puts(c);

    return 0;
}
~~~

### scanf()
`scanf()` analiza la entrada que coincide con los especificadores de formato.

- `&` El signo & antes del nombre de la variable es el operador de dirección . Da la dirección, o ubicación en la memoria, de una variable.

~~~ c
#include <stdio.h>

int main(){

    int a, b;
    printf("Ingrese números: ");
    scanf("%d %d", &a, &b);

    printf("Valor de a: %d \n", a);
    printf("Valor de b: %d \n", b);

    return 0;
}
~~~

---

## Constantes
Una constante almacena un valor que no se puede cambiar desde su asignación inicial.
~~~ c
const float PI = 3.141592;
printf("PI: %f", PI);
~~~
Otra forma de definir una constante es con la directiva de preprocesador `#define`.

~~~ c
#include <stdio.h>
#define PI 3.141592
int main(){
    printf("PI: %f", PI);
    return 0;
}
~~~
---
## Operadores Aritméticos 
Los operadores aritméticos se utilizan para realizar operaciones aritméticas básicas. Operaciones como suma, resta, multiplicación, división y división de módulo.

- `+`	Suma 
- `-`	Resta
- `*`	Multiplicación
- `/`	División
- `%`	División de módulo (evalúa el resto)

~~~ c
#include <stdio.h>
int main(){
    int a = 20;
    int b = 10;
    int result;

    //Suma
    result = a + b; 
    printf("%d + %d = %d \n",a, b, result);

    // Resta 
    result = a - b;
    printf("%d - %d = %d \n",a, b, result);

    //Multiplicación
    result = a * b;
    printf("%d x %d = %d \n",a, b, result);

    //División entera 
    result = a / b;
    printf("%d / %d = %d \n",a, b, result);

    //División Real 
    printf("5 / 2 = %.1f \n",(5.0 / 2.0));

    // Modulo de una división
    result = a % b;
    printf("%d mod %d = %d \n",a, b, result);
    printf("5 mod 2 = %d \n",(5 % 2));
}
~~~
---
## Math 
La biblioteca `math.h` define varias funciones matemáticas y una macro. Todas las funciones disponibles en esta biblioteca consideran a `double` como argumento y regresan un `double` como resultado.

### Potencia 
~~~ c
//Exponete 
double p = pow(2,3);
printf("%.0f \n", p);
~~~

### Raiz cuadrada 
~~~ c
//Raiz cuadrada 
double s = sqrt(16);
printf("%.0f \n", s);
~~~ 

Mas funciones de la libreria [math.h](http://conclase.net/c/librerias/math) y mas [librerias de c](http://conclase.net/c/librerias);
