import java.util.Scanner;

public class P1293 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		// Tamaño del vector
		int n = sc.nextInt();
		// Creando el vector
		int vec[] = new int[n];
		// Lectura
		for (int i = 0; i < n; i++) {
			vec[i] = sc.nextInt();
		}
		// FIn lectura

		boolean es_palindrome = true;
		
		for (int i = 0; i < n / 2; i++) {
			int j = (n - 1) - i;
			if (vec[i] != vec[j]) {
				es_palindrome = false;
			}
		}
		
		if (es_palindrome == true) {
			System.out.println("SI");
		} else {
			System.out.println("NO");
		}

	}

}
