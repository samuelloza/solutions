package solutions.patito;

import java.util.Scanner;

public class p1266 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		// Como en la entrada dice varios casos de prueba, usamos hasNext
		while (sc.hasNext()) {
			int m = sc.nextInt(); // Numero de elementos del polinomio
			int v = sc.nextInt(); // Dato a evaluar
			
			//Creamos el vector de polinomios
			int polinomio[] = new int[m];

			//Leemos el vector de polinomios
			for(int i = 0; i < m; i++) {
				polinomio[i] = sc.nextInt();
			}
			
			double solucion = 0.0;
			int indice      = m - 1;
			for (int i = 0; i < m; i++) {
				solucion = solucion + (polinomio[i] * Math.pow(v,indice));
				indice   = indice - 1;
			}
			System.out.printf("%.1f", solucion); //Redondeamos el numero para que nos muestre con dos decimales
			System.out.println(); //Enter vacio
		}

	}

}
