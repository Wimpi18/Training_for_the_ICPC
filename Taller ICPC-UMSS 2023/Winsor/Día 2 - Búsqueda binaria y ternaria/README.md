# **Búsqueda Binaria y Ternaria**
## Apuntes
- El predicado es una pregunta formal que se aplica a funciones monotónicas (creciente o decreciente pero no estrictamente)
- Tomar en cuenta si usaremos los límites: $[low, high] \ ; \ [low, high) \ ; \ (low, high)$
- Usualmente se usa para encontrar el último algo o el primer algo
- Para la búsqueda ternaria se aplica a funciones bitónica o unimodal, con el cual se puede hallar el máximo o mínimo, pero tiene que ser estrictamente creciente y decreciente, solo el vértice puede tener valores repetidos 
- Busqueda ternaria funciona bien cuando los valores son enteros
## Aprendizajes del segundo contest
- Siempre verificar el costo de mis operaciones, esto para ver si puedo usar fuerza bruta u optimizar algún algoritmo 
- Aprender algunas funciones lambda como para crear funciones
- Aprender a usar el `upper_bound` y `lower_bound`, también usando operaciones entre iteradores *(Twin Primes)*
- Complejidad del sort es $O(n*log(n))$ por lo que en cuanto a costos es un regalo, solo hay que preocuparse cuando ordenamos muchas veces
- Algunos problemas se pueden ver geométricamente, por ejemplo si se puede aplicar búsqueda ternaria se puede ver geométricamente *(Devu and his brother)*
## [Contest](https://vjudge.net/contest/569836)