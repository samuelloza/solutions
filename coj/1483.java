import java.util.Scanner;

public class Main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String cad;
		while (sc.hasNext()) {
			cad = sc.next()+" ";
			if (cad.substring(0, 1).equals("s")) {
				double x = sc.nextDouble();
				System.out.println((int) (x * x));
			} else {
				if (cad.substring(0, 1).equals("r")) {
					double x = sc.nextDouble(), y = sc.nextDouble();
					System.out.println((int) (x * y));
				}

			}
		}

	}
}