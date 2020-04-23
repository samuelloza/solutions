import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int lim = sc.nextInt();
		for (int i = 0; i < lim; i++) {
		StringBuffer	cad = new StringBuffer();
			cad.append(sc.next());
			int ii = 0;
			while (ii < cad.length() - 1) {
				if (cad.charAt(ii) == cad.charAt(ii + 1)) {
					cad.delete(ii, ii + 2);
					ii--;
					if (ii < 0) {
						ii = 0;
					}
				} else {
					ii++;
				}
			}
			System.out.println(cad);
		}

	}
}