package solutions.patito;

import java.util.Scanner;

public class p1006 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		sc.nextLine(); //Leemos una linea en blanco
		
		for (int i = 0; i < n; i++) {  //Leemos los casos de prueba
			String cadena = sc.nextLine();
			int contador = 0;
			for (int j = 0; j < cadena.length(); j++) { //Recorremos los elementos de la cadena
				if(contador%2 == 0) {
					System.out.print( Character.toUpperCase(cadena.charAt(j))); //Convertimos a mayusculas
				}else {
					System.out.print( Character.toLowerCase(cadena.charAt(j))); //Convertimso a minusculas
				}
				
				if(Character.isAlphabetic(cadena.charAt(j))) { //Verificamos que sea una letra
					contador++;
				}
			}
			System.out.println();
		}
		
	}

}
