

import java.util.Scanner;

public class p1068 {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int n = sc.nextInt();
		for (int i = 0; i < n; i++) {
				int t = sc.nextInt();
				int conta = 0;
				boolean sw = true;
				for (int j = 0; j < t; j++) {
					String cad =sc.next();

					if(cad.equals("porque")) {
						sw = false;
					}
					
					if(sw == true) {
						conta ++;
					}
				}
				System.out.println(conta);
		}

	}

}
