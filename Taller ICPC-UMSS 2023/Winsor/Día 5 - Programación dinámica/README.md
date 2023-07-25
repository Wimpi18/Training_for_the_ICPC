# Programación Dinámica
- Nos sirve para optimizar una función recursiva.
- Problemas de conteo, usualmente número de formas de hacer algo.
- Minimizar o maximizar cierto valor.
- Para calcular probabilidades.
## Tipos
- Bottom Up (Iterativo) es más rápido y ocupa menos espacio
- Top Down (Recursivo) es más fácil de implementar ya que es más descriptivo
## Fibonacci
$f(x)= \left\{ \begin{array}{lcc} 0 \\ \\ 1 \\ \\ f(n-1) + f(n-2) \end{array} \right.$
## Complejidad en un DP
Es el Nro de estados multiplicado por cuanto me cuesta calcular un estado ${Nestados*calculoEstados}$
## Paso a paso
- Primero definir ¿Qué es el estado o situación?
- Describir nuestro dp[i][j] (Me falta subir i escalones y dar j saltos)
- Definir las transiciones, es decir definir el problema en términos de si mismo (el dp depende de `dp[i-1][j-1] y dp[i-2][j-1]`)
## [Contest](https://vjudge.net/contest/570530)