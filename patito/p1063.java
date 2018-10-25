package solutions.patito;

import java.util.Scanner;

public class p1063 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		String a = "";
		int m = 0;
		
		for (int i = 0; i < t; i++) {
			a = sc.next();
			m = sc.nextInt();
			int solucion = 0;
			for (int j = 0; j < a.length(); j++) {
				solucion = ((solucion*10)%m+Integer.parseInt(a.charAt(j)+"")%m)%m;
			}
			System.out.println(solucion);
		}
	}
}
