import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (sc.hasNext()) {
			int x;
			x = sc.nextInt();
			int xx = (x * (x + 1) * (2 * x + 1)) / 6;
			int yy = (int) Math.pow((x * (x + 1) / 2), 2);
			System.out.println(xx + " " + yy);

		}
	}

}
