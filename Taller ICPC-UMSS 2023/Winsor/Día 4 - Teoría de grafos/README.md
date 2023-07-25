# **Teoría de Grafos**
Un grafo es un conjunto de objetos llamados vértices o nodos, unidos por enlaces llamados aristas o arcos.
## Tipos de grafos
- Grafo dirigido
- Grafo no dirigido
## Matriz de adyacencia
Es una forma de representar un grafo con una matriz de NxN, donde la arista se representa con un 1 si es que existe entre dos nodos.
```c++
int n,m;
cin>>n>>m;
vector<vector<int>> g(n, vector<int>(n));
    for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    g[a][b] = 1;
    g[b][a] = 1;
}
```

```c++
vector<vector<int>> g;
void lista_adyacencia(){
    int n,m;
    cin>>n>>m;
    g.resize(n);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a].pb(b);
        g[b].pb(a);
    } 
}
```

## Características de un grafo
- Vecino y grado
- Distancia
- Por notación se utiliza M o E para aristas y N o V para nodos

## Formas de recorrer un grafo
### BFS
Usamos una cola para procesar el nivel anterior y generar el siguiente nivel, por ejemplo para obtener el 2do nivel o 2dos vecinos procesamos todos los del 1er nivel o 1ros vecinos.
```c++
vector<int> bfs(vector<vector<int>>& g , int v) {
    vector<int> dis(g.size(), -1); // vector de distancias
    queue<int> q;
    dis[v] = 0;
    q.push(v);
    while(!q.empty()){ // mientras haya nodos por procesar
        int node= q.front();
        q.pop();
        for(int x : g[node]){ // para cada y vecino de x
            if(dis[x] == -1){ // si x no fue encolado aun
                dis[x] = dis[node] + 1;
                q.push(x);
            }
        }
    }
    return dis;
}
```
### DFS
```c++
vector<bool> vis(tam);
void dfs(int node){
    vis[node] = 1;
    for(int x : g[node])
        if(!vis[x])
            dfs(x);
}
```
## Componentes conexas
Para decir que dos nodos están conectados debe existir un camino con o sin nodos intermedios.

## Flood fill
Consiste en representar una grilla mediante un grafo implícito.
```c++
int n, m; // dimensiones del tablero
int dir[2][4] = {{0,0,1,-1}, {1,-1,0,0}}; // direcciones
vector<vector<int>> tab, visi;
int floodfill(int x, int y) {
    if(x < 0 || y < 0 || x >= n || y >= m || visi[x][y] || ta[x][y] == 0)
        return;
    visi[x][y] = 1;
    int ret = 1;
    for(int i = 0; i < 4; i++)
        ret += floodfill(x + dir[0][i], y + dir[1][i]);
    return ret;
}
```
## Orden topológico
Solo se puede obtener en grafos dirigidos y si es que no existe ningún ciclo.
```c++
vector<int> topSort(vector<vector<int>> &g, vector<int> in){
    int n = in.size();
    vector<int> topo;
    queue<int> q;
    for(int i = 0; i < n; i++)
    if(in[i] == 0)
        q.push(i);
    while(!q.empty()){
        int node = q.front(); q.pop();
        topo.push_back(node);
        for(int x : g[node])
            if(--in[x] == 0)
                q.push(x);
    }
    return topo;
}
```
## Caminos más cortos
### Dijkstra
Tambien podemos recuperar el camino (nodos participantes) más corto, esto se haría con árboles actulizando cada vez el padre del nodo. No se puede aplicar si existen ciclos o aristas con pesos negativos.
En vez de ∞ podemos usar un número muy grande que sería igual a M*MaxValue + 1.
```c++
vector<int> dijkstra(vector<vector<pair<int, int>>> &g, int source){
    int n = g.size();
    vector<int> dis(n, 1e9);
    vector<bool> vis(n);
    priority_queue<pair<int, int>> que;
    que.push({0, source});
    dis[source] = 0;
    while(!que.empty()){
        int node = que.top().s;
        que.pop();
        if(vis[node]) continue;
        vis[node] = 1;
        for(ii ed : g[node])
            if(dis[ed.f] > dis[node] + ed.s){
                dis[ed.f] = dis[node] + ed.s;
                que.push({-dis[ed.f], ed.f});
            }
    }
    return dis;
}
```
### Bellman-Ford
Es parecido al Dijkstra pero si admite aristas con pesos negativos.
```c++
struct edge{
    int u, v, cost;
};
vector<int> bellmanFord(int n, int m, vector<edge> &e, int s){
    vector<int> dis(n, 1e9);
    dis[s] = 0;
    for (int i = 0; i< n-1; i++)
        for (int j = 0; j < m; j++)
            dis[e[j].v] = min(dis[e[j].v], dis[e[j].u] + e[j].cost);
    return dis;
}
```
### Floyd-Warshall
Nuestra matriz de adyacencia va a tener el peso de las aristas y si no tiene una relación se coloca un número muy grande M++.
```c++
void floyd(vector<vector<int> > &dis){
    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
}
``` 
## Árboles
Un árbol es un grafo conexo sin ciclos
## Union-Find o Disjoint set union (DSU)
```c++
struct unionFind {
    vi p;
    unionFind(int n) : p(n, -1) {}
    int findParent(int v) {
        if (p[v] == -1) return v;
        return p[v] = findParent(p[v]);
    }
    bool join(int a, int b) {
        a = findParent(a);
        b = findParent(b);
        if (a == b) return false;
        p[a] = b;
        return true;
    }
};
```
Se puede usar *Small to Large* para evitar una complejidad cuadrática al momento de hacer un *Union-Find*
```c++
if(a.size() > b.size())
    swap(a, b);
```
## Kruskal
Es un árbol que mantiene el grafo conectado pero con los pesos de las aristas mínimas, se utiliza en problemas de tipo *Greedy*.
```c++
int kruskal(vector<pair<int, pair<int, int>>> edges, int n) {
    //edges: lista de aristas en la forma {peso, {nodo1, nodo2}}
    sort(edges.begin(),edges.end()); // ordena por peso
    unionFind uni(n);
    int cont = 0, res = 0;
    for(auto e: edges){
        int costo = e.first, u = e.second.first, v = e.second.second;
        if(uni.join(u, v)){
            cont++;
            res += costo;
        }
        if(cont == n - 1) // ¿Completamos el árbol?
        return res;
    }
    return -1; // si llegamos hasta aqui entonces no es conexo
}
```
## Aprendizajes del cuarto contest
- Con un grafo implícito a veces no es necesario crear el grafo sino solo recorrerlo *(Ejercicio E)*
- Se recomienda DFS para recorrer un grafo
- ¿Como detectar ciclos? Con orden topológico se puede deducir si al ejecutar el algoritmo en nuestra cola no metemos N nodos
- Se pueden encontrar ciclos negativos con el Bellman-Ford
- Algunos problemas se pueden resolver con lógica negativo, es decir¿que pasa si lo pienso al revés?
- Para visualizar grafos podemos usar [csacademy](https://csacademy.com/app/graph_editor/)
- Se evalúan que condiciones son obligatorias para definir algo, lo vamos descubriendo y definiendo paso a paso en papel *(Ejercicio N)*
## [Contest](https://vjudge.net/contest/570253)