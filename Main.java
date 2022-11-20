class Main {
    /*
     * Recorrido de árbol posterior al orden: iterativo y recursivo
     * 
     * Author Nordevelop
     *
     * metodo Recursivo ordenamiento posterior atravesar el arbol binario
     */
    public static void posorden(Nodo raiz) {
        // devolver si el nodo actual esta vacio
        if (raiz == null) {
            return;
        }

        // atravesar el subarbol izquierdo
        posorden(raiz.izda);

        // atravesar el subarbol derecho
        posorden(raiz.dcha);

        // mostrar el dato parte de la raiz(o nodo actual)
        System.out.print(raiz.dato + " ");
    }

    public static void main(String[] args) {
        /*
         * Author Nordevelop
         */
        Nodo raiz = new Nodo(1);
        raiz.izda = new Nodo(2);
        raiz.dcha = new Nodo(3);
        raiz.izda.izda = new Nodo(4);
        raiz.dcha.izda = new Nodo(5);
        raiz.dcha.dcha = new Nodo(6);
        raiz.dcha.izda.izda = new Nodo(7);
        raiz.dcha.izda.dcha = new Nodo(8);

        posorden(raiz);
    }
}
