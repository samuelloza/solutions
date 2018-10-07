

import java.util.Scanner;

public class p1588 {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int casos = sc.nextInt();
		for (int i = 0; i < casos; i++) {
			int n = sc.nextInt();
			int suma = 0;
			for (int j = 0; j < n; j++) {
				int dato = sc.nextInt();
				if((dato*2) % 3 == 0 ) {
					suma = suma +(dato*2);
				}
			}
			System.out.println("La suma es "+suma);
		}
		

	}

}
