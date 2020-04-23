import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int lim = sc.nextInt();
		for (int i = 0; i < lim; i++) {
			int saldo = sc.nextInt();
			int lim2 = sc.nextInt();
			for (int j = 0; j < lim2; j++) {
				String cad = sc.next();
				if (cad.equals("C")) {
					saldo = saldo + sc.nextInt();
				} else if (cad.equals("D")) {
					saldo = saldo - sc.nextInt();
				}

			}
			System.out.println(saldo);
		}
	}
}
