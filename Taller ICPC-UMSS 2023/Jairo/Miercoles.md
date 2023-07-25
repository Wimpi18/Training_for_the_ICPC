# Miercoles

## Solución de problema

---

- Problema C
    
    Probar todas las combinaciones de desplazamientos posibles
    
    Funcion lambda o funciones anónimas
    
- Problema D
    
    Upper bound en vectores con iterador incio, final y el valor. Retorna un iterador al mayor más pequeño.
    
    Restamos los iteradores para saber la cantidad de elementos en el intervalo (resta de direcciones de memoria)
    
    ![image-1689772120865.jpg7145116110740570327.jpg](Miercoles%2058bfdec1f94947f4a74a5644426cf830/image-1689772120865.jpg7145116110740570327.jpg)
    
- Problema E
    
    Para minimizar la diferencia entre elementos maximizamos
    
    Ambos sumandos deben ser menores o iguales a la suma buscada.
    
- Problema F
    
    Buscamos con los costos requeridos para aumentar la mediana a un valor deseado.
    
- Problema H
    
    Busqueda ternaria se puede resolver con análisis geométrico.
    
    Vemos que para que se cumpla la condición, los demás elementos también deben cambiar
    
- Problema G
    
    La ternaria de tres es mejor con doubles.
    
    Para calcular cuantas veces hay que iterar tomamos el máximo valor de f vs el mínimo. Comparamos cuantas veces debemos reducir el intervalo en  2/3 para reducir el intervalo al minimo
    
- Problema I
    
    Menor o igual con doibles
    
    A ≤ B  A< B + EPS
    
    A < B  A < B - EPS
    

## Teoría de números

---

Operaciones relacionadas con enteros.

### Divisibilidad

$$
a |b \, \rightarrow a *x = b; x \epsilon \Z
$$

### Teorema fundamental de la aritmética

Todo número entero

### Bitset

Arreglo de bits que por debajo son enteros

Es posible crear arreglos más grandes

Para hallar a^(-1) mod n

![image-1689779839514.jpg4792255672041944288.jpg](Miercoles%2058bfdec1f94947f4a74a5644426cf830/image-1689779839514.jpg4792255672041944288.jpg)

![image-1689780048618.jpg4100328402453871923.jpg](Miercoles%2058bfdec1f94947f4a74a5644426cf830/image-1689780048618.jpg4100328402453871923.jpg)

## Exponencial binaria modular

Para exponenciación más rápida