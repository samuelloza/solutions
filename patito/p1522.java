

import java.util.Scanner;

public class p1522 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int m = sc.nextInt();
		for (int i = 0; i < m; i++) {
			int n = sc.nextInt();
			if(n >= 5) {
				System.out.println(0);
			}else {
				switch (n) {
				case 0:
					System.out.println(1);
					break;
				case 1:
					System.out.println(1);
					break;
				case 2:
					System.out.println(2);
					break;
				case 3:
					System.out.println(6);
					break;
				case 4:
					System.out.println(4);
					break;
				default:
					break;
				}
			}

		}

	}

}
