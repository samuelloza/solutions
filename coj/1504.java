import java.util.Scanner;

public class Main {
	static boolean vec[] = new boolean[1000000 + 1];

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		generar();
		int lim = sc.nextInt();

		for (int a = 0; a < lim; a++) {
			int ini, fi;
			ini = sc.nextInt();
			fi = sc.nextInt();
			int cont = 0;
			for (int i = ini; i <= fi; i++) {
				if (vec[i]) {
					cont++;
				}
			}
			System.out.println(cont);
		}

	}

	public static void generar() {
		int ini = 1;
		int fi = 1000000;
		for (int i = ini; i <= fi; i++) {
			String aux = String.valueOf(i);
			if (aux.contains("2") || aux.contains("4") || aux.contains("6")
					|| aux.contains("8") || aux.contains("0")) {
				vec[i] = true;
			}
		}
	}
}
