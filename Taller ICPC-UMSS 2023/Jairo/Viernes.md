# Viernes

## Resolución de problemas

---

- Problema E
    
    Grafo implícito
    
    En los grafos implícitos no se crean las aristas, se calcula a dónde ir por cada nodo.
    
    A veces es mejor detenerse a pensar un rato para encontrar una mejor solución, depende del tiempo invertido en la competencia 
    
- Problema F
    
    Se necesita un grafo dirigido acíclico
    
    Si el tamaño del orden topológico no es igual a la cantidad de nodos, hay ciclos.
    
    De las disponibles escojo la mínima
    
    Si hay ciclos,  falla
    
- Problema G
    
    Movimientos laterales y diagonales
    
    Flood fill modificado
    
    Bfs?
    
- Problema H
    
    Modificar dijkstra para retornar los padres de cada nodo.
    
    El camino estará al revés, hay que recuperarlo
    
- Problema I
    
    Ver si existe ciclo negativo
    
    Bellman-ford
    
    Verificar corriendo una vez más y ver mejora
    
- Problema J
    
    Unir nodos
    
    Ver la cantidad de componentes conexas que restan por cada corte
    
    Dfs no da por complejidad
    
    Usar union find pero al revés. Uniendo los que se cortan
    
    Ver que pasa si es al revés a veces es útil
    
- Problema K
    
    Union find 
    
    Conectar todas mas mayores hasta que estén conectados y cuando se conecten será como que se separan (?
    
    También había que pensar al revés
    
- Problema N
    
    Csacademy.com/graph/editor para ver grafos
    
    Encontrar una serie de condiciones que completen la definición flor
    
- Problema M
- Problema L
    
    Arbol es grafo dirigido sin ciclos
    
    Eulee taun
    
    Lca
    

Tratar de hacer hasta el I para saber lo básico de grafos

## Programación dinámica

---

Nombre confuso y genial

Aplicaciones

- Optimiza funciones recursivas
- Problemas de conteo
- Minimizar o maximizar cierto valor
- Calcular probabilidades

No queremos calcular algo dos veces

Resolver para aprender

### Tipos de programación dinámica

- Bottom up (Rápido y eficiente)
    
    Iterativa porque usa fors
    
    Se arma desde abajo
    
    Hay que saber el orden de los estados (eso es lo dificil)
    
- Top down (Fácil de implementar y ocupa más espacio)
    
    Vamos por casos
    
    Forma recursiva
    
    Función recursiva que se programa y luego se agrega memorización.
    

Siempre hay que saber cuan grande será nuestra memoria

Hay que poder definir un problema en términos de sí mismo, si cada vez se hace más fácil, ¿Cómo es cuando se hace demasiado fácil?

Es mejor practicar con la versión recursiva y luego pasar a la iterativa.

Las dimensiones de la memoria están dadas por aquellas cosas que cambian y hay que memorizar.

De recursivo a iterativo 

### Ejemplos de aplicación

- Finobonacci
    
    Su versión recursiva es un poco lenta
    
    Tarda igual a lo que tardan los anteriores
    
    El tiempo es exponencial
    
    Al ser recursivo tarda más
    
    Con dp le damos memoria, revisamos si ya lo calculamos, si no, lo calculamos y lo marcamos como visitado
    
    De exponencial se vuelve lineal
    
    Para calcular la complejidad en un dp
    
    Es el número de estados por cuanto cuesta calcular un estado.
    
    $$
    estados * calculoEstado
    $$
    
    El fibonacci con for es dp iterativo.
    
- Problema de las cajitas
    
    Fibonacci
    
- Problema con múltiples saltos posibles

### Pasos para dp

1. Definir qué es el estado.
    
    Ej escalones y saltos
    
    Hay que saber describir dp[est1][est2]
    
    Ej me falta subir i escalones y dar j saltos
    
2. Definir las transiciones
    
    Define el problema en términos de sí mismo
    
    En base a las formas de transicionar, ver desde dónde venimos.
    
    Ej dp[i - 1][j-1] y dp[i-2][j-1]
    
    Debemos poder definir en palabras
    

No se puede hacer dp con un grafo de transiciones cíclico.