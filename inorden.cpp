// Función para recorrer un árbol en inorden
void inorden(Nodo *raiz) {
  // Si la raíz es nula, no hay nada que hacer
  if (raiz == nullptr) return;

  // Recorre el subárbol izquierdo en inorden
  inorden(raiz->izquierdo);

  // Procesa el nodo raíz
  cout << raiz->valor << " ";

  // Recorre el subárbol derecho en inorden
  inorden(raiz->derecho);
}
