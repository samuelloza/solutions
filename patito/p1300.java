package solutions.patito;

import java.util.Scanner;

public class p1300 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (sc.hasNext()) {

			int n = sc.nextInt();
			String cade = "";
			for (int i = 0; i < n; i++) {
				cade = sc.nextInt() + "" + " "+cade;
			}
			System.out.println(cade.trim());
		}
	}
}
