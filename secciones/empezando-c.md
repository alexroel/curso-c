# Empezando con lenguaje C 

1. [Instalar GCC](#instalar-gcc)
2. [Instalar VSCode](#instalar-vscode)
3. [Hola Mundo](#hola-mundo)
4. [Comentarios](#comentarios)
5. [Proceso de Compilación](#proceso-de-compilación )

---
## Instalar GCC
Instala GCC el compilador de C en le sistema operativo que trabajas. 
### Instalador de Windows 
Descargar MinGW-w64 que trae compiladores con de C/C++ en la siguiente página https://www.mingw-w64.org/downloads/ y pasa a instalar. 

Luego de instalar agrega la ruta de la instalación, axactamente la carpeta BIM `C:\Program Files(x86)\mingw-w64\¡686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin` agrega la PATH. 
Comprueva la instalación 
~~~ sh
gcc --version 
~~~
### Instalar en Linux  
Instala GCC con el siguiente comando.  
~~~shell
sudo apt-get install gcc
~~~ 
Luego conprueve que se instalo correctamente con: 
~~~sh
gcc --version
~~~ 

### Instalar en Mac  
Para instalar GCC desde la terminal tener instalado brew si usas brew. https://brew.sh/index_es 

Instala GCC con el siguiente comando.  
~~~sh
brew install gcc
~~~ 
Luego conprueve que se instalo correctamente con: 
~~~shell
gcc --version
~~~ 

---

## Instalar VSCode
Descarga VS Code dela siguiente página: [https://code.visualstudio.com/Download](https://code.visualstudio.com/Download).

### Extenciones para VS Code de C 

- C/C++
- C/C++ Compile Run

Extenciones Opcionales 

- Monokai Night Theme
- Material Icon Theme

--- 

## Hola Mundo 
Um ejemplo de HOLA MUNDO con C, el tipico programa que se realiza al momento de aprender un lenguaje de programación. 

~~~ c 
#include <stdio.h>

int main(){
    
    printf("Hola Mundo");

    return 0;
}
~~~ 

### Estructura de un programa 
- `#include` es una directiva de preprocesador que se utiliza para realizar algún procesamiento antes del proceso de compilación. La directiva include preprocesador inserta todo el contenido del archivo `stdio.h` al comienzo de nuestro código. 
- Para ejecutar cualquier programa, debemos conocer la función de inicio de un programa. Puede pensarlo como una puerta de entrada al programa.
- `printf ()` es una función de C que se utiliza para escribir texto en la pantalla.
- `return` La declaración de retorno especifica que una función ha terminado todas sus tareas.

Compilar la aplicación: 
~~~ sh
gcc app.c -o app
~~~
Elecutar el archivo compilado 
~~~ sh 
./app

Hola Mundo

~~~

---

## Comentarios 
Los comentario se aplican despues de doble barra diagonal `//` o entre `/* comentario */`. 
Los comentarios son códigos no ejecutables que sirven para agregar documentación sobre el codigo o sobre una función para que sea mas legible.  

~~~ c
//Comentario de Linea 

/*Comentario 
de 
Bloque 
*/

#include <stdio.h> //Incluir libreria stdio.h

//Función main es una una funcion especial  
//esta función es el principal de la aplicación 
//desde donde inicia la ejecuciòn   
int main(){

    printf("Hola Mundo! \n"); //Imprime hola mundo en la consola 
    //printf("Hola Mundo de C! \n"); 

    return 0;//Termina la función 
}
~~~

## Proceso de Compilación 
Para ver todo los pasos de compilación ejecuta el siguiente comando: 
~~~sh
gcc -save-temps app.c -o app
~~~
~~~ sh

- app  
- app.c  
- app.i  
- app.o  
- app.s  

~~~
- `app.c` Código fuente de la aplicación 
- `app.i` Preprocesamiento del código fuente 
    - Elimina comentarios 
    - Inserta el contenido de los archivos de encabezado en nuestro archivo de código fuente. 
- `app.s` Compilación de archivo preprocesado 
    - Revisa errores de sintaxis 
    - Traducer el archivo a lenguaje ensamblador 
    - Optimiza el código para su mejor rendimiento  
- `app.o` Ensablaje de código fuente compilado 
    - De ensamblador traduce a lenguaje maquina 
- `app` Vinculación de archivos de objetos  
    - Finalmente, el enlazador entra en acción y realiza la tarea final del proceso de compilación. Acepta el archivo intermedio `<file-name.o>` generado por el ensamblador. Vincula todas las llamadas a funciones con su definición original. Lo que significa que la función `printf ()` se vincula a su definición original. 
