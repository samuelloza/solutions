import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a, b, c;
		a = sc.nextInt();
		b = sc.nextInt();
		c = sc.nextInt();
		while (a != 0 || b != 0 || c != 0) {
			if (2 * b - a == c) {
				System.out.println("AP " + (2 * c - b));
			} else {
				System.out.println("GP " + (c * (b / a)));
			}

			a = sc.nextInt();
			b = sc.nextInt();
			c = sc.nextInt();
		}

	}
}