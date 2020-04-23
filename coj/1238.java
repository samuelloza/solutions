import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String le;
		le = sc.nextLine();
		int vec[] = new int[10000];
		int resu = 0;
		while (!le.equals("0")) {
			for (int i = 0; i < le.length(); i++) {
				vec[i] = Integer.parseInt(le.substring(i, i + 1));

			}
			int li = le.length();

			for (int i = 0; i < le.length(); i++) {

				resu = vec[i] * factorial(li) + resu;
				li--;
			}
			System.out.println(resu);
			le = sc.nextLine();
			resu = 0;
		}

	}

	public static int factorial(int n) {

		int m = 1;
		for (int i = 1; i <= n; i++) {
			m = i * m;

		}
		return m;
	}

}
