import java.util.Scanner;

public class arbolbinario {
    public static class Nodo {
        String apellido;
        String instruccion;
        Nodo izquierdo;
        Nodo derecho;

        public Nodo(String instruccion) {
            this.instruccion = instruccion;
        }

        public boolean tieneHijos(){
            return this.izquierdo != null | this.derecho != null;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Nodo A = new Nodo("Se encuentra la biblioteca?");
        
        Nodo Aa = new Nodo("Gire a la izquierda y camine 10 pasos.");
        Nodo Ab = new Nodo("Dirijase a la cafeteria, suba el 2do piso. Se encuentra allí?");
        A.izquierdo = Aa;
        A.derecho = Ab;

        Nodo Ba = new Nodo("Dirijase al salón 201 y gire a mano derecha");
        Nodo Bb = new Nodo("Busque el aula de sistemas.");
        Ab.izquierdo = Ba;
        Ab.derecho = Bb;

        Nodo nodoInicial = A;
        recorrer_arbol(sc, nodoInicial);
    }

    private static void recorrer_arbol(Scanner sc, Nodo nodoActual) {
        while (true) {
            System.out.println(nodoActual.instruccion);
            if (nodoActual.tieneHijos()){
                System.out.println("Si es correcto, marque 1; en caso contrario, marque 2: ");
                int num = sc.nextInt();
                if (num == 1) {
                    nodoActual = nodoActual.izquierdo;
                } else {
                    nodoActual = nodoActual.derecho;
                }
            }else{
                break;
            }
        }
    }
}