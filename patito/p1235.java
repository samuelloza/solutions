package solutions.patito;

import java.util.Scanner;

public class p1235 {
	/**
	 * @author Sam
	 */
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int vec[] = new int[n];
		for (int i = 0; i < n; i++) {
			vec[i] = sc.nextInt();
		}

		int suma = 0;
		for (int i = 0; i < n; i++) {
			suma = suma + vec[i];
		}

		int min     = 100000000;
		int grupo_a = 0;

		for (int i = 0; i < n; i++) {
			grupo_a = grupo_a + vec[i];
			suma = suma - vec[i];
			min = Math.min(min, Math.abs(grupo_a - suma));
		}
		System.out.println(min);

	}

}
