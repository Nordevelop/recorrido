
// Clase para representar un nodo en un árbol
class Nodo {
public:
  // Atributo que almacena el valor del nodo
  int valor;

  // Atributos que almacenan los nodos hijo izquierdo y derecho
  Nodo *izquierdo;
  Nodo *derecho;

  // Constructor de la clase
  Nodo(int valor) : valor(valor), izquierdo(nullptr), derecho(nullptr) {}
};

// Función para recorrer un árbol en preorden
void preorden(Nodo *raiz) {
  // Si la raíz es nula, no hay nada que hacer
  if (raiz == nullptr) return;

  // Procesa el nodo raíz
  cout << raiz->valor << " ";

  // Recorre el subárbol izquierdo en preorden
  preorden(raiz->izquierdo);

  // Recorre el subárbol derecho en preorden
  preorden(raiz->derecho);
}
