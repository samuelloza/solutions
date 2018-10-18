import java.util.Scanner;

public class p1449 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a, b, n;
		while (sc.hasNext()) {
			a = sc.nextInt();
			b = sc.nextInt();
			n = sc.nextInt();
			int min = Math.min(a, b);
			int max = Math.max(a, b);
			int sol = 0;
			for (int i = 0; i < n; i++) {
				int dato = sc.nextInt();
				if (dato >= min && dato <= max) {
					sol += dato;
				}
			}
			System.out.println(sol);
		}
	}
}
