package solutions.patito;

import java.util.Scanner;

public class p1476 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(); //Leemos el tamaño del primer vector
		int m = sc.nextInt(); //Leemos el tamaño del segundo vector
		//Creamos el primer Vector
		int A[] = new int [n];
		int B[] = new int [m];
		
		//Leemos los elementos del primer vector
		for (int i = 0; i < n; i++) {
			A[i] = sc.nextInt();
		}
		
		//Leemos los elementos del segundo vector
		for (int i = 0; i < m; i++) {
			B[i] = sc.nextInt();
		}
		
		//Unimos los dos vectores en un vector C
		//n+m es el tamaño del nuevo vector
		int C[] = new int[n+m];
		
		//llenamos con los elementos de A y B
		//Insertamos los primeros n elementos
		int i;
		for (i = 0; i < n; i++) {
			C[i] = A[i]; 
		}
		//Insertamos los siguientes m elementos
		for (int j = 0; j < m; j++) {
			C[i] = B[j];
			i++;
		}
		//Ordenamos los vectores
		//Para ordenar usamos el metodo burbuja
		for (int j = 0; j < (n+m) - 1 ; j++) {
			for (int k = j + 1 ; k < (n+m); k++) {
				if(C[j] > C[k]) {
					int tmp = C[j];
					C[j]    = C[k];
					C[k]    = tmp;
				}
			}
		}
		
		//Mostramos los elementos
		for (int j = 0; j < (n+m); j++) {
			System.out.println(C[j]);
		}
		
		
		
	}

}
