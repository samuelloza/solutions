import java.util.Scanner;

public class Main{

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int lim = sc.nextInt();
		for (int i = 0; i < lim; i++) {
			String cad = sc.next();
			int li = sc.nextInt();
			System.out.println("Case" + " " +( i + 1));
			for (int i1 = 0; i1 < li; i1++) {
				int rev = rev(cad, sc.next());
				if (rev == 0) {
					System.out.println("Darwin was right about this creature");
				} else {
					System.out.println(rev);

				}
			}
		}

	}

	public static int rev(String cad, String bus) {
		int cont = 0;
		// System.out.println(bus.length()-1);
		for (int i = 0; i < cad.length(); i++) {
			if (cad.length() - i > bus.length() - 1) {
				// System.out.print(cad.charAt(i));
				if (bus.equals(cad.substring(i, i + bus.length()))) {
					// System.out.println(cad.substring(i, i + bus.length()));
					cont++;
				}
			} else {

			}

		}
		return cont;
	}
}
