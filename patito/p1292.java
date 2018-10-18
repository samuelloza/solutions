package solutions.patito;

import java.util.Scanner;

public class p1292 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (sc.hasNext()) {
			int sol = 0;
			int dato = 0;
			while ((dato = sc.nextInt()) != 0) {
				sol += dato;
			}
			System.out.println(sol);
		}
	}

}
