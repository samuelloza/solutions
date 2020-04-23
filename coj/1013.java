import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (true) {
			long x = sc.nextLong();
			long xx = Math.abs(x);
			if (x == 0) {
				break;
			}
			int result = 0;
			for (int i = 32; i >= 1; i--) {
				if (i % 2 == 0 && x < 0) {
					continue;
				}
				double m = Math.pow(xx, 1.0 / i);
				int n1 = (int) Math.floor(m);
				int n2 = (int) Math.ceil(m);
				if (Math.pow(n1, i) == xx || Math.pow(n2, i) == xx) {
					result = i;
					break;
				}
			}
			System.out.println(result);
		}
	}
}