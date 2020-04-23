import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int lim = sc.nextInt(), a, b;
		for (int i2 = 0; i2 < lim; i2++) {
			a = sc.nextInt();
			b = sc.nextInt();
			boolean sw = true;
			for (int i = a; i <= b; i++) {
				if (fun(Integer.toBinaryString(i))) {
					if (sw) {
						System.out.print(i);
						sw = false;
					} else {
						System.out.print(" " + i);
					}
				}
			}
			System.out.println("");
		}

	}

	public static boolean fun(String sPalabra) {
		int inc = 0;
		int des = sPalabra.length() - 1;
		boolean bError = false;

		while ((inc < des) && (!bError)) {

			if (sPalabra.charAt(inc) == sPalabra.charAt(des)) {
				inc++;
				des--;
			} else {
				bError = true;
			}
		}

		if (!bError) {
			return true;
		}

		else {
			return false;
		}

	}

}