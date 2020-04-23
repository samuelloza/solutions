import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		int lim;
		Scanner sc = new Scanner(System.in);
		lim = sc.nextInt();
		for (int i = 0; i < lim; i++) {
			int a, b;
			a = sc.nextInt();
			b = sc.nextInt();
			if (a != b && a - b != 2) {
				System.out.println("No Number");
			} else {
				if (a % 2 == 0 && b % 2 == 0) {
					System.out.println(a + b);
				} else {
					System.out.println(a + b - 1);
				}
			}

		}

	}

}
