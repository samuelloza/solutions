import java.util.Scanner;

public class p1297 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		sc.nextLine();
		for (int i = 0; i < n; i++) {
			String cade = sc.nextLine();
			String sol = "";
			for (int j = 0; j < cade.length(); j++) {
				sol = cade.charAt(j)+""+sol+" ";
			}
			System.out.println(sol.trim());
		}
	}
}
