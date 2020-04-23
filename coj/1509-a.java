import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int lim = sc.nextInt();
		for (int i = 0; i < lim; i++) {
			String n = sc.next();
			Double num = Double.parseDouble(n);
			int entero = num.intValue();
			String cad = transformar(num - entero);
			if (cad.length() >= 20) {
				System.out.println(Integer.toBinaryString(entero) + "."
						+ cad.substring(0, 20));
			} else {
				System.out.println(Integer.toBinaryString(num.intValue()) + "."
						+ cad);
			}
		}
	}

	private static String transformar(Double d) {
		String nume = "";
		Double re;
		int rr = 0;
		int ente;
		while (d != 0.0 && rr < 22) {
			re = (d * 2);
			ente = re.intValue();
			d = (re - ente);
			if (re < 1) {
				nume += "0";
			} else {
				nume += "1";
				re--;
			}
			rr++;
		}
		if (nume.equals("")) {
			return "0";
		} else {
			return nume;
		}
	}
}