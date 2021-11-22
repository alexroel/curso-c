# Control de Flujos

1. [Operadores Relacionales](#operadores-relacionales) 
2. [Operadores Lógicos](#operadores-lógicos) 
3. [Condiciones](#condiciones) 
4. [Expresion if](#expresion-if)
5. [Switch](#switch)   
6. [Operadore en Asignación](#operadore-en-asignación)
7. [Incremento y Decremento](#incremento-y-decremento)
8. [Bucle While](#bucle-while)
9. [Do While](#Do-While)
10. [break y continue](#break-y-continue)
11. [Bucle For](#Bucle-For)

---
## Operadores Relacionales 
Usamos operadores relacionales para comparar dos constantes, variables o expresiones. Generalmente comparamos dos cantidades de naturaleza similar. Del mismo modo, los operadores relacionales solo pueden comparar dos tipos similares.

En la programación en C, no existe el concepto de valores booleanos. C representa falso con 0 y verdadero con un valor entero distinto de cero.

- `>`	Mayor que
- `<`	Menor que
- `>=`	Mayor o igual que
- `<=`	Menor o igual que
- `==`	Igual que
- `!=`	Distinto

~~~ c
int a = 10;
int b = 20;

// 0 -> Falso 
// 1 -> Verdadero
printf("%d > %d = %d \n",a,b, (a > b)); 
printf("%d < %d = %d \n",a,b, (a < b));
printf("%d >= %d = %d \n",a,b, (a >= b)); 
printf("%d <= %d = %d \n",a,b, (a <= b)); 
printf("%d == %d = %d \n",a,b, (a == b));
printf("%d != %d = %d \n",a,b, (a != b)); 
~~~

---
## Operadores Lógicos 
Usamos operadores lógicos para combinar dos o más expresiones relacionales como una sola expresión relacional. Los operadores lógicos evalúan un valor booleano (entero en el caso de C) dependiendo del operador utilizado.

- `&&`	AND lógico
- `||`	OR lógico
- `!`	NO lógico

~~~ c
char a = 'a';
char A = 'A';

// 0 -> Falso 
// 1 -> Verdadero

printf("%d \n", (a == 'a' && A == 'A'));    
printf("%d \n", (a == 'b' || A == 'A')); 
printf("%d \n", (! (a == 'b') && A == 'A')); 
~~~

---
## Condiciones 
Las declaraciones de control de flujos son el corazón de cualquier lenguaje de programación. En su vida de programación, encontrará que el 60-70% de su programa consiste en declaraciones de control de flujos. Para dominar el arte de la programación, debe tener un buen control sobre su programa. Debe tener un control sólido sobre las declaraciones de control de flujos.

Condición simple:
~~~ c
int age = 26;

// 0 -> Falso 
// 1 -> Verdadero
    //Condicion 
if (age >= 18){
    printf("Eres Mayor de Edad \n");
}
~~~

Condición con selección doble. 

~~~c
int age = 26;
// 0 -> Falso 
// 1 -> Verdadero

//Condicion 
if (age >= 18){
    printf("Eres Mayor de Edad \n");
}else{
    printf("No eres mayor de edad \n");
}
~~~

Multiples condiciones 

~~~c
int age = 26;
// 0 -> Falso 
// 1 -> Verdadero

//Condicion 
if (age >= 18){
    printf("Eres Mayor de Edad \n");
}else if(age > 50){
    printf("Tienes mas de 50 años \n");
} else{
    printf("No eres mayor de edad \n");
}
~~~

---
## Expresión if
Otra forma de formar una declaración if-else es usando el operador?: En una expresión condicional . El operador?: Solo puede tener una instrucción asociada con el if y el else .
Por ejemplo :

~~~ c
int a;
int b = 3;

//Expresión if 
a = (b >= 5) ? 5 : b;

/* Equivalente a 
    if (b >= 5)
        a = 5;
    else
        a = b;
*/

printf("El valor es: %d \n", a);
~~~

## Switch 
La instrucción switch bifurca el control del programa haciendo coincidir el resultado de una expresión con un valor de caso constante . La sentencia switch a menudo proporciona una solución más elegante a las sentencias if-else if y anidadas if .

~~~c
int num = 3;

switch (num){
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
    printf("Cuatro 0 Cinco \n");
    break;
default:
    printf("No se encontro el número \n");
    break;
}
~~~

---
## Operadore en Asignación 
C admite una variante corta de operador de asignación llamada asignación compuesta o asignación abreviada. El operador de asignación abreviado combina uno de los operadores aritméticos o bit a bit con el operador de asignación.

~~~c
int a = 5;
a = a + 2;
~~~
Ejemplos 
- Suma en asignacióm `+=` `a += 10`	`a = a + 10`
- Resta en asiganción `-=`	`a -= 10`	`a = a - 10`
- Multiplicación e asignación `*=`	`a * = 10`	`a = a * 10`
- División en asiganción `/=`	`a /= 10`	`a = a / 10`
- Modulo en asiganción `%=`	`a %= 10`	`a = a% 10`
`

--- 

## Incremento y Decremento 
Los operadores Incrementar y Disminuir se utilizan para incrementar o disminuir el valor en 1.
Hay dos variantes de operador de incremento / decremento.
- Prefijo (pre-incremento y pre-decremento) 
- Postfix (post-incremento y post-decremento)

### pre-incremento y post-incremento
Ejemplo de pre-incremento 
~~~c
int a = 0;
    
printf("%d \n", ++a);
printf("%d \n", ++a);
printf("%d \n", ++a);
~~~
Ejemplo de post-incremento 
~~~c
int a = 0;
    
printf("%d \n", a++);
printf("%d \n", a++);
printf("%d \n", a++);
~~~


### pre-decremento y post-decremento
Ejemplo de pre-decremento 
~~~c
int a = 0;
    
printf("%d \n", --a);
printf("%d \n", --a);
printf("%d \n", --a);
~~~
Ejemplo de post-decremento 
~~~c
int a = 0;
    
printf("%d \n", a--);
printf("%d \n", a--);
printf("%d \n", a--);
~~~

---
## Bucle While 
La instrucción while se denomina estructura de bucle porque ejecuta declaraciones repetidamente mientras una expresión es verdadera, repitiéndose una y otra vez. Toma la forma:

~~~c
int count = 1;

while (count <= 5){
    printf("%d \n", count);
    count++;
}

~~~

---
## Do While
El ciclo do- while ejecuta las declaraciones del ciclo antes de evaluar la expresión para determinar si el ciclo debe repetirse.
Toma la forma:

~~~c
int count = 6;

do{
    printf("%d \n", count);
    count++; 
} while (count <= 5);}

~~~

---
## break y continue
La declaración de interrupción se introdujo para su uso en la declaración de cambio . También es útil para salir inmediatamente de un bucle.

Ejemplo con break.
~~~c
int num = 1;

while (num <= 10){
    printf("%d \n", num);
    num++;

    if (num == 5){
        printf("Fin del programa \n");
        break;
    }
}
~~~

Ejemplo de continue 
~~~c
int num = 0;

while (num < 10){
    num++;
    if (num == 5){
        printf("Saltar a siguiente \n");
        continue;
    }
    printf("%d \n", num);
}
~~~

---
## Bucle For
La instrucción for es una estructura de bucle que ejecuta declaraciones un número fijo de veces.

~~~c
for (int i = 0; i <=10; i++){
    printf("%d \n", i);
}
~~~

El bucle for puede contener varias expresiones separadas por comas en cada parte.
Por ejemplo:
~~~c
for(int a = 0, b = 10; a <=10; a++, b--){
    printf("%d - %d \n", a, b);
}
~~~