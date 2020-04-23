import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int b = sc.nextInt();
		int cont = 0;
		for (int i = 1; i <= b; i++) {
			if (gdc(i, b) == 1) {
				cont++;

			}
		}
		System.out.println(cont);
	}
	public static int gdc(int x, int y) {
		int c;
		while (y > 0) {
			c = x % y;
			x = y;
			y = c;
		}
		return (x);

	}
}
