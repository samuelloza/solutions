import java.util.Scanner;

public class p1641 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String cade = sc.nextLine();
		int n = sc.nextInt();
		int q = 0;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			q = sc.nextInt();
			sum = (sum + q) % cade.length() ;
		}
		sum = (sum % cade.length());
		System.out.print(cade.substring(cade.length() - sum, cade.length()));
		System.out.println(cade.substring(0, cade.length() - sum));
	}
}
