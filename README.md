# recorrido
Recorrido de árbol posterior al orden: iterativo y recursivo

Dado un árbol binario, escriba una solución iterativa y recursiva para recorrer el árbol mediante el recorrido posorden en C++, Java y Python.

A diferencia de las listas enlazadas, los arreglos unidimensionales y otras estructuras de datos lineales, que se recorren en orden lineal, los árboles se pueden recorrer de múltiples maneras en primer orden en profundidad ( preorden , en orden y posorden ) o en orden primero en amplitud ( orden de nivel ). transversal ). Más allá de estos recorridos básicos, son posibles varios esquemas más complejos o híbridos, como búsquedas limitadas en profundidad como la búsqueda iterativa de profundización primero en profundidad. En esta publicación, se analiza en detalle el recorrido del árbol posterior al pedido.
 

 
Atravesar un árbol implica iterar sobre todos los nodos de alguna manera. Como el árbol no es una estructura de datos lineal, puede haber más de un nodo siguiente posible a partir de un nodo dado, por lo que algunos nodos deben ser diferidos, es decir, almacenados de alguna manera para visitarlos más tarde. El recorrido se puede realizar iterativamente, donde los nodos diferidos se almacenan en la pila , o se puede realizar por recursión , donde los nodos diferidos se almacenan implícitamente en la pila de llamadas .

Para atravesar un árbol binario (no vacío) en orden posterior, debemos hacer estas tres cosas para cada nodo na partir de la raíz del árbol:

(L)Atraviesa recursivamente su subárbol izquierdo. Cuando finalice este paso, volvemos a nempezar.
(R)Atraviesa recursivamente su subárbol derecho. Cuando finalice este paso, volvemos a nempezar.
(N)Proceso nen sí.
 
En el recorrido normal posterior al orden, visite el subárbol izquierdo antes que el subárbol derecho. Si visitamos el subárbol derecho antes de visitar el subárbol izquierdo, se denomina recorrido inverso en posorden.

Recorrido posterior al pedido

Practica Este Problema

Implementación recursiva
Como podemos ver, antes de procesar cualquier nodo, primero se procesa el subárbol izquierdo, seguido del subárbol derecho, y finalmente se procesa el nodo. Estas operaciones se pueden definir recursivamente para cada nodo. La implementación recursiva se conoce como búsqueda en profundidad (DFS) , ya que el árbol de búsqueda se profundiza tanto como sea posible en cada niño antes de pasar al siguiente hermano.
