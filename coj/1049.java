import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long k = 0;
		long c = sc.nextLong();
		for (long i = 1; i <= Math.abs(c); i++) {
			k = k + i;
		}

		if (c > 0)
			System.out.println(k);
		if (c == 0)
			System.out.println(k);
		if (c < 0)
			System.out.println(-k + 1);
	}
}