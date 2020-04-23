import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		while (num != 0) {

			int ugly[] = new int[1501], ps[] = { 1, 1, 1 }, factors[] = { 2, 3,
					5 };
			ugly[1] = 1;

			for (int i = 2; i <= num; i++) {
				ugly[i] = Math.min(2 * ugly[ps[0]], Math.min(3 * ugly[ps[1]],
						5 * ugly[ps[2]]));

				for (int j = 0; j < ps.length; j++)
					if (factors[j] * ugly[ps[j]] == ugly[i])
						ps[j]++;
			}
			System.out.println(ugly[num]);
			num = sc.nextInt();
		}
	}
}
