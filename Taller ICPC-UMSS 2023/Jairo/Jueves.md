# Jueves

## Resolución de problemas

---

- Problema 1
    
    Si el módulo es menor a la raiz del máximo número sí entra
    
- Problema 2
    
    Descubrir el patrón
    
- Problema 3
    
    Descubrir el patrón
    
    No olvidar pensar en el problema antes de pensar en programar la solución
    
- Problema F
    
    Para factorizar tenemos la misma complejidad que para ver si es primo o no
    
- Problema D
    
    Generar los primos hasta el tope más grande y buscar en la criba
    
- Problema H
    
    Es posible usar una criba parcial.
    
    Iterar entre L y U y calcular la cantidad de divisores
    
    La primer opción era contando los divisores con complejidad √n
    
    Otra opción es con la fórmula de conteo de primos
    
- Problema G
    
    N podía ser negativo, había que aplicar el valor absoluto.
    
    Opción 1, generar la criba y factorizar para hallar el más grande
    
    Opción 2, el for xd
    
- Problema E
    
    No tener miedo al enunciado
    
    Hacer la operación -1
    
    Factorización en factores primos de forma descendente
    
    En c++ está get line que lee lop que queda de la línea, por eso hay que hacer cin.ignore
    
    Usar stringstream que simula el cin o cout usando un string
    
- Problema I
    
    La cantidad de parejas a formar:
    
    0 < a < b ≤ n es igual a 0 < a < b < n + a <b con b=n
    
    Usar fi de euler para la cantidad de parejas con a < b con b = n
    
- Problema J
    
    Desarrollar sumatoria usando el teorema fundamental y la función phi de euler
    
    Reducir el coston con propiedades
    

## Teoría de grafos

---

Rama de la matemática discreta.

### Grafo

Conjunton de objetos llamados vértices relacionados entre sí, estas relaciones se representan con segmentos dirigidos o no dirigidos.

- Dirigido
- No dirigido

**Representación**

- Matriz de adyacencia
    
    Matriz de n x n
    
    El valr de Aij es 1 si el nodo i está relacionado con el nodo j
    
    Si es dirigido es simetrica
    
    Si no no
    
- Listas de adyacencia
    
    Una lista de n listas donde cada lista contiene los nodos q los que puede llegar
    
    Es la más útil
    

Definiciones

- Vecino. - Nodos conectados a una arista.
- Grado. - Cantidad de vecinos de un nodo.
- Distancia. - La distancia entre los nodos u y v es la menor existente.

Recorridos

- BFS. - Calcula la distancia mínima de un nodo v a los demás.
    
    Es como una onda expansiva.
    
    Procesamiento por niveles gracias a la cola del algoritmo.
    
    Complejidad
    
    O(m + n)
    
    m es la cantidad de aristas y n es la cantidad de nodos.
    
- DFS.-
    
    Empezamos un nodo fuente y por cada vecino vemos, si no está visitado entramos a él.
    
    Algoritmo recursivo.
    
    Complejidad relativa a las aristas
    

Bfs sirve para distancias

Dfs sirve para ver la estructura del grafo, podemos generar un grafo que es útil

**Componente conexa**

Dos vértices están conectados si existe un camino que los une.

Para todo grafo no dirigido es posible subdividirlo en componentes conexas (subconjuntos)

**Flood fill (inundación)**

Se puede  hacer con DFS y BFS

No hace falta crear el grafo, este está implícito en la grilla.

Flodfill retorna el tamaño de la componente

Con matrices globales conseguimos revisar todos los espacios inundables posibles

**********************************Orden topolóogico**********************************

Dado un grafo dirigido, es un ordenamiento de los nodos de modo que para cada arksta x → y, x vuene antes que y en el orden.

Solo puedo tomar los que no dependen de los demás

Solo es posible en grafos sin ciclos porque sino habría dependencia constante.

Se procesa primero los nodos que tienen grado de entrada nula, para contar los grados de entradas debemos recorrer el grafo y agregar 1 por cada entrada al nodo.

****************Dijkstra****************

Funciona con dirigidos y no dirigidos

Se toman en cuentra grafos pesados, estos grafos son aquellos que asignan un valor a su arista.

En el algoritmo, infinito lo podemos calcular multiplicando la distancia más larga por el máximo entre la cantidad de aristas y la camtidad de nodos + 1.

Se procesa primero el nodo más cercano no procesado.

Para recuperar el camino trabajamos con un vector de padres haciendo que cada nodo solo tenga un padre: el que le da la menor distancia.

Complejidad ElogE si usamos una cola de prioridad para escoger el siguiente, por cada nodo agregamos los demás en logE creo xd

Ciclo negativo se obtiene cuando los pesos son negativos y se recorre jna y otra vez porque el camino es cada vez más corto.

**************************BellmanFord**************************

Un poco más caro que Dijkstra solamente que ahora puede usar pesos negativos.

Relajar la distancia es preguntar

If (dis[b] > dis[c]+c)

Se realiza n - 1 veces porque esa es la cantidad máxima de nodos a visitar para llegar de u a v.

Struct permite definir un tipo de dato.

****************************************Floyd-Warshall****************************************

Usa matriz de adyacencia.

Si una matriz de adyacencia representa un grafo cargado, contiene el peso en Aij.

Para cada par de nodos revisa si se puede mejorar con otro camino al nodo destino

**************Arboles**************

Grafo conexo que no tiene ciclos

La cantidad de aristas es la cantidad de nodos menos 1

********************Union find********************

- Find(x) es igual que find parent

Al unir conjuntos es mejor hacer swap por el mas grande e ir retirando del más pequeño.

Small to large.

**************Kruskal**************

Algoritmo greedy en grafos

Arbol que contiene todos los nodos del grafo y los une con n - 1 aristas con la suma de aristas menor posible.

Complejidad es el costo de ordenar las aristas

**********************************Investigar prim**********************************