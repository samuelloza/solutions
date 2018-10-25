package solutions.patito;

import java.util.Scanner;

public class p1348 {

	public static void main(String[] args) {
		// Numeros base
		String numeros_base = "unu du tri kvar Kvin ses Sep OK Nau dek";
		String base[] = numeros_base.split(" "); // convertimos a vector
		String numeros[] = new String[100];
		// Llenamos con los 10 primeros digitos
		int digito = 1;
		for (int i = 0; i < 10; i++) {
			numeros[digito] = base[i];
			digito++;
		}
		// Llenamos con los digitos restantes 11 al 99
		
		String aux = "";
		for (int i = 0; i < 9; i++) {
			if (i == 0) {
				aux = ""; 
			} else {
				aux = base[i];
				numeros[digito] = base[i] + "dek"; //La construccion de estis numeros son diferentes 20,30,40,50,60,70,80 y 90
				digito++;
			}

			for (int j = 0; j < 9; j++) {
				numeros[digito] = aux + "dek " + base[j];
				digito++;
			}

		}
		//Como ya generemos todos los numeros en esperanto, solo nos toca mostrar los datos
		Scanner sc = new Scanner(System.in);
		while (sc.hasNext()) {
			int n = sc.nextInt();
			System.out.println(numeros[n]);
		}
	}

}
