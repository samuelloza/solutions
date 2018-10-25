package solutions.patito;

import java.util.Scanner;

public class p1296 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(); //Casos de prueba
		sc.nextLine(); //Leemos una linea vacia
		String datos[] = new String[n]; //Creamos un vector de Cadenas
		
		for (int i = 0; i < n; i++) {  //Recorremos el vector
			datos[i]= sc.nextLine(); // Y llenamos los datos
		}
		//Para imprimir el vector en orden inverso
		//Recorremos de forma inversa del final hacia adelante
		for (int i = n - 1; i >= 0; i--) {
			//Invertimos los datos
			String cadena   = datos[i];
			String solucion = "";
			for (int j = 0; j < cadena.length(); j++) {
				solucion = cadena.charAt(j)+solucion;
			}
			System.out.println(solucion);
		}
		
	}

}
