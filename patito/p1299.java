package solutions.patito;

import java.util.Scanner;

public class p1299 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			int n = sc.nextInt();
			//Declaramos el vector
			int a[]= new int[n];
			int b[]= new int[n];
			//Llenamos los datos
			for (int j = 0; j < n; j++) {
				a[j] = sc.nextInt();
			}
			
			for (int j = 0; j < n; j++) {
				b[j] = sc.nextInt();
			}
			//FIn llenado de datos
			int sol = 0;
			for (int j = 0; j < n; j++) {
				sol = sol + (a[j]*b[j]);
			}
			System.out.println(sol);
			
		}
	}
}
