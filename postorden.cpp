// Función para recorrer un árbol en postorden
void postorden(Nodo *raiz) {
  // Si la raíz es nula, no hay nada que hacer
  if (raiz == nullptr) return;

  // Recorre el subárbol izquierdo en postorden
  postorden(raiz->izquierdo);

  // Recorre el subárbol derecho en postorden
  postorden(raiz->derecho);

  // Procesa el nodo raíz
  cout << raiz->valor << " ";
}
