public class Nodo {
    /*
     * author Nordevelop
     * 
     * parametros de Clase Nodo
     * 
     */

    int dato;
    Nodo dcha, izda;

    public Nodo(int clave) {// clave parametro del metodo
        /*
         * metodo constructor
         * 
         */
        dato = clave;
        izda = dcha = null;
    }

}
