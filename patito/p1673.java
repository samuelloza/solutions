

import java.util.Scanner;

public class p1673 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int vec[] = new int[n + 1];
		for (int i = 0; i < n; i++) {
			vec[i] = sc.nextInt();
		}
		
		int m = sc.nextInt();

		for (int i = 0; i < m; i++) {
			int conta_dinos = 0;
			int sumar_dinos = 0;
			int poder = sc.nextInt();
			for (int j = 0; j < n; j++) {
				if(poder>=vec[j]) {
					conta_dinos++;
					sumar_dinos += vec[j];
				}
			}
			System.out.println(conta_dinos+" "+sumar_dinos);
		}
		
	}

}
