import java.util.Scanner;

public class Main {
	static String vec[] = new String[27];
	static String vec2[] = new String[27];
	static int num2 = 0;

	public static void main(String[] args) {
		vec[1] = "A";
		vec[2] = "B";
		vec[3] = "C";
		vec[4] = "D";
		vec[5] = "E";
		vec[6] = "F";
		vec[7] = "G";
		vec[8] = "H";
		vec[9] = "I";
		vec[10] = "J";
		vec[11] = "K";
		vec[12] = "L";
		vec[13] = "M";
		vec[14] = "N";
		vec[15] = "O";
		vec[16] = "P";
		vec[17] = "Q";
		vec[18] = "R";
		vec[19] = "S";
		vec[20] = "T";
		vec[21] = "U";
		vec[22] = "V";
		vec[23] = "W";
		vec[24] = "X";
		vec[25] = "Y";
		vec[26] = "Z";

		vec2[1] = ".";
		vec2[2] = ".";
		vec2[3] = ".";
		vec2[4] = ".";
		vec2[5] = ".";
		vec2[6] = ".";
		vec2[7] = ".";
		vec2[8] = ".";
		vec2[9] = ".";
		vec2[10] = ".";
		vec2[11] = ".";
		vec2[12] = ".";
		vec2[13] = ".";
		vec2[14] = ".";
		vec2[15] = ".";
		vec2[16] = ".";
		vec2[17] = ".";
		vec2[18] = ".";
		vec2[19] = ".";
		vec2[20] = ".";
		vec2[21] = ".";
		vec2[22] = ".";
		vec2[23] = ".";
		vec2[24] = ".";
		vec2[25] = ".";
		vec2[26] = ".";
		Scanner sc = new Scanner(System.in);
		char[] aux2;
		char[] aux;

		String cad = sc.next();
		int num = sc.nextInt();
		String cad2 = sc.next();
		aux = cad.toCharArray();
		// aux = eliminarRepetidos(aux);
		num2 = aux.length;

		aux2 = cad2.toCharArray();
		int i = 0;

		vaciado(aux, num, i);
		i = 0;
		String h = "";

		for (int j = 1; j <= aux2.length; j++) {
			h = h + validar2(String.valueOf(aux2[i]));
			i++;
		}
		System.out.println(h.trim());

	}

	private static char[] eliminarRepetidos(char[] aux) {
		int ki = 0;
		String cade2 = "";
		for (int i = 1; i <= aux.length; i++) {
			for (int j = i + 1; j < aux.length; j++) {
				if (aux[i] == aux[j] && aux[i] != 32) {
					aux[j] = 32;
					cade2 = cade2 + aux[i];
					ki++;
				}
			}
		}
		if (cade2.length() > 0) {
			return aux = cade2.toCharArray();
		} else {

			return aux = aux;
		}

	}

	private static void vaciado(char[] aux, int num, int i) {
		int cont = num;
		int j = 1;
		while (j <= num2) {
			if (cont <= 26) {
				vec2[cont] = String.valueOf(aux[i]);
				i++;
				cont++;
				j++;
			} else {
				cont = 1;
			}

			completaABC(cont);
		}
		for (int j2 = 1; j2 <= 26; j2++) {
			// System.out.print(vec2[j2]);
		}
	}

	private static void completaABC(int cont) {
		int j = 1;
		int ii = cont;
		if (ii <= 26) {

		} else {
			ii = 1;
		}
		int h = 1;
		while (j <= 26) {
			if (!validar(vec[j])) {
				vec2[ii] = vec[j];
				ii++;
			}
			j++;
			if (ii <= 26) {

			} else {
				ii = 1;
			}

			h++;
		}
	}

	private static boolean validar(String vec3) {
		for (int i = 1; i <= 26; i++) {
			if (vec3.equals(vec2[i])) {
				return true;
			}
		}
		return false;
	}

	private static String validar2(String vec3) {
		String cad = "";
		for (int i = 1; i <= 26; i++) {
			if (vec3.equals(vec2[i])) {
				return vec[i];
			}
		}
		return cad;
	}
}