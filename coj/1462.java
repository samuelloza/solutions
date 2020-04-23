import java.util.Scanner;

public class Main {

	public static void main(String args[]) {
		int tests;
		long sum = 0;
		Scanner in = new Scanner(System.in);
		tests = in.nextInt();
		for (int i = 1; i <= tests; i++) {
			String cade = in.next();
			String residuo = "";
			int ncad = cade.length();
			if (ncad >= 7) {
				residuo = cade.substring(ncad - 7, ncad);
				sum += Long.parseLong(residuo);
			} else {
				residuo = cade;
				int resto = Integer.parseInt(residuo) % 128;// funciona tambien
															// sin el %128
				sum += resto;
			}
		}
		System.out.println(sum % 128);
	}
}