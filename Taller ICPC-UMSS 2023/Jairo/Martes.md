# Martes

## Resolución de problemas

---

- Problema 1
    
    Una cadena es como un array.
    
    Es posible hacer pop_back
    
    Es posible ordenar strings con sort
    
    Es posible hacer reverse a un string
    
- Problema 2
    
    Solo es multiplicar
    
- Problema C
    
    Fácil
    
- Problema D
    
    Problema greedy, ambicioso, goloso.
    
    Estos problemas consisten en ir por lo que nos gusta más primero.
    
    La forma de demosrración de correctitud se llama argumento de intercambio: probamos intercambiar con un valor peor, si la solución empeora, nuestra solución actual es la mejor.
    
- Problema E
    
    Consideraciones de precisión y desborde.
    
    Int desborda.
    
    Al desbordar solo se muestran los bits menos significativos que ingresen en la capacidad del tipo de dato.
    
    Doubles aprox 15 digitos
    
    Floats aprox 7 
    
    __float 128 aprox 30
    
    Debido a cómo se reprrsentan los números de coma flotate en binario, existen ciertos problemas con las operaciones, por lo tanto es mejor no usarlos. 
    
    Había que usar la formula 
    
    Mul * x > lim
    
    Y revisar que x > lim/mul
    
    Lim podía ser 1e18 o 1000000000000000000ll
    
- Problema F
    
    Había que ver 3 cosas
    
    Cuál es el mínimo número de oatas que debe haber 
    
    2x
    
    Cuál es el máximo número de oatas que debe haber
    
    4x
    
    Puede haber una cantidad de patas impar
    
- Problema G
    
    Requería saber cómo probar todas las posibilidades.
    
    Tocaba revisar cuando el mínimo vj llegaba a ser mayor o igual al requerimiento
    
    Había que revisar todos los subconjuntos posibles.
    
    Es posible representar conjuntos con bits
    
    Revisar máscaras de bits
    
- Problema H
    
    Había que revisar las restricciones: el problema está con los dos dígitos después de la coma
    
    Manejar el número decimal como string
    
- Problema I
    
    Manejar una lista de candidatos y banear a los no candidatos
    
    Extraer el menor de la lista
    
    Los candidatos iban del 0 al 101
    
    Si a in vextor oe damos tamaño y valor 
    
    vi ar (102,1)
    
    evaluae en un entero una condicional da true si no es cero y falso si es cero
    
- Problema J
    
    Revisar las restricciones
    
    Usar unordered set
    
    Revisar que los de jill no estén en el set de jack
    
- Problema K
    
    Usar mapas
    
    Parseo
    
- Problema L
    
    Simular con ordered set
    
    Usae find by order para eliminar
    
    La suma de impares da par
    
    X & 1 revisa si es par o impar
    
    Revisa la condición desde el centro hasta afuera
    
- Problema M
    
    Usar cuerda o reap
    
    #include <ext/rope>
    
- Problema N
    
    Jugar con mapas y sets
    
    Simular
    
    Sacar el menor y saber su llave correspondientee con pair
    
- Problema O
    
    Simular con colas
    
- Problema P
    
    Para maximizar a * b
    
    Maximizamos a * maximizamos b
    
    Multiset multiconjunto ordenado
    
    Cada corte aumenta los segmentos en 1
    
    Algo peligroso en el multi set borra todas las coincidencias si le pasamos un valor con erase, por eso es mejor eliminar con iterador
    
    Simular
    
- Problema Q
    
    Usar un set de pair de string
    
- Problema R
    
    Jugar con sets
    
    Sufijo de i es la suma de elementos de i hasta el final
    
- Problema S
    
    Usar una pila
    
    Para reordenar borramos la pila 
    
    Verificamos si está borrada
    
- Problema T
    
    To lower y comparar
    
- Problema
    
    Simular eliminando a medida que va creciendo
    

## Teoría búsqueda binaria / ternaria

---

Si podemos convertir un problema a la forma

00000000…0111111…1

Habiendo ordenado los valores prevismente y obteniendo esos valores con un predicado

Y buscamos el último 0 o 1

Podemos usar búsqueda binaria.

El predicado se aplica a funciones crecientes o decrecientes (monotónicas)

$$
predicado(f(x))
$$

En el juego del millón, 

$$
f(x) = x
$$

- Problema 1: encontrar un número en un arreglo ordenado
    
    Para pasar un vector por referencia usamos &
    
    Hay que definir si buscamos el primer mayor o igual o el último menor o igual.
    
    1, 2, 3, 5, 7
    
    0, 0, 0, 1, 1
    
    1, 1, 1, 1, 0
    
    Variedades
    
    [lo, hi] , [lo, hi), (lo, hi)
    
- Problema 2: Dados N números, cual es el número más cercano a x que se puede obtener sumando 2 números

### Búsqueda ternaria

![pachaTernaria.jpg](Martes/pachaTernaria.jpg)

Función bitónica o unimodal

Se convierte la función a una monotónica para luego aplicar búsqueda binaria, esto  hace preguntando por las diferencias para encontrar cuando empieza a crecer

Funciona bien cuando x es entero porque no nos funcionaría ir de 1 en 1, en ese caso Dividimos la función en tres partes para mayor precisión y Eliminamos los tercios de los extremos