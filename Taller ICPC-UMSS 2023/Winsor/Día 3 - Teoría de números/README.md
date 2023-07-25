# **Teoría de Números**
## Apuntes
- Para hacer una criba gigante de eratostenes necesitamos un bitset. Su complejidad será de $O(n*log(log(n)))$
- La exponenciación binaria modular sirve para contar más rapido
- Repasar matemáticas discretas, como cuantas combinaciones hay de un dado lanzado 10^9 veces
- Ecuaciones diotánticas
## Expresiones
- $a|b \rArr b \% a \rightarrow 0$
- $a \equiv b \ (n) \lrArr a-b|n \equiv a*x - b*x = n$
- Inverso multiplicativo y teorema de Fermat: $a^{p-2} \equiv a^{-1} \ (p)$
## Aprendizajes del tercer contest
- Algunos problemas no son solo computar, sino descubrir algo en el papel mediante algunas pruebas
- Todo el equipo debe leer el problema 
- `getline(cin, s)`, `cin.ignore()` y `stringstream` para un formato especial de entradas en el que nos envian una línea de números pero no nos dicen cuantos
- En algunos problemas tenemos que reducir una ecuación a una expresión menos costosa
- Existe una lógica en la cual tienes que estar totalmente convencido de que tu respuesta es la correcta, para ello puedes intentar crear un argumento contradictorio y si no existe entonces la solución pensada es confiable.
## [Contest](https://vjudge.net/contest/570010)