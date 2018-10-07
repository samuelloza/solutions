

import java.util.Scanner;

public class p1677 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int i = 0; i < n; i++) {
			String cad = sc.next();
			long sol   = 0;
			int czero = 0;
			for (int j = 0; j < cad.length(); j++) {
				if(cad.charAt(j) == '0') {
					czero++;
				}
			}
			for (int j = 0; j < cad.length(); j++) {
				if (cad.charAt(j) == '1') {
					sol +=(czero); 
				}else{
					czero--;
				}

			}
			System.out.println(sol);
		}
	}

}
