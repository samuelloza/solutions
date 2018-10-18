import java.util.Scanner;

public class p1290 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		while ((n = sc.nextInt()) > 0) {
			int sol = 0;
			for (int i = 0; i < n; i++) {
				sol +=sc.nextInt(); 
			}
			System.out.println(sol);
		}

	}

}
