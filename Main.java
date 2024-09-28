import java.io.File;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.awt.Desktop;

public class Main {
    public static void main(String[] args) {
        // Declarar Tamanio de la matriz
        int filas = 10;
        int columnas = 10;

        // Crear y llenar la matriz con etiquetas como a1, a2, b1, b2, etc.
        String[][] matriz = new String[filas][columnas];

	char letra = 'a';
	for (int i = 0; i < filas; i++) {
	for (int j = 0; j < columnas; j++) {
	matriz[i][j] = letra + String.valueOf(j + 1);
}//Fin primer for
            letra++;
}//Fin segundo for

        // Imprimir
        System.out.println("Matriz 2D con etiquetas:");
        for (int i = 0; i < filas; i++) { // recorrer filas
	for (int j = 0; j < columnas; j++) { // recorrer columnas
	System.out.print(matriz[i][j] + " ");
}//fin primer for
            System.out.println(); // 
}//fin segundo for

        // Mapa para asociar cada posición con su imagen correspondiente
        Map<String, String> imagenesPorPosicion = new HashMap<>();
        imagenesPorPosicion.put("g8", "C:\\Users\\Juan SZ\\Desktop\\FOTOS PIA\\Pasillo1.jpeg");
        imagenesPorPosicion.put("f8", "C:\\Users\\Juan SZ\\Desktop\\FOTOS PIA\\Pasillo2.jpeg");
        imagenesPorPosicion.put("f9", "C:\\Users\\Juan SZ\\Desktop\\FOTOS PIA\\Pasillo2Derecha.jpeg");
        imagenesPorPosicion.put("f7", "C:\\Users\\Juan SZ\\Desktop\\FOTOS PIA\\Pasillo2Izquierda.jpeg");

        Scanner scanner = new Scanner(System.in);
        boolean continuar = true;

        while (continuar) {
	System.out.println("Ingrese la posicion a la que desea moverse (por ejemplo, h8), o escriba 'cerrar' para salir:");
	String posicion = scanner.nextLine();

	if (posicion.equalsIgnoreCase("cerrar")) {
	continuar = false;
	break;
	} 
	else {
                abrirImagen(imagenesPorPosicion.get(posicion), posicion);
	}
}

        System.out.println("Hasta luego");
        scanner.close();
    }

    private static void abrirImagen(String rutaImagen, String posicion) {
        try {
            File archivoImagen = new File(rutaImagen);
            if (Desktop.isDesktopSupported() && archivoImagen.exists()) {
                Desktop.getDesktop().open(archivoImagen);
                System.out.println("Imagen abierta para la posicion " + posicion);
            } else {
                System.out.println("No se pudo abrir la imagen para la posición " + posicion + ". Comprueba la ruta del archivo.");
            }
        } catch (Exception e) {
            System.out.println("Error al abrir la imagen: " + e.getMessage());
        }
    }
}
