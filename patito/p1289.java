package solutions.patito;

import java.util.Scanner;

public class p1289 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int i = 0; i < n; i++) {
			int m = sc.nextInt();
			int sol = 0 ;
			for (int j = 0; j < m; j++) {
				sol += sc.nextInt();
			}
			System.out.println(sol);
		}
		
		
		
	}

}
