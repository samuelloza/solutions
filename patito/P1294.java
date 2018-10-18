import java.util.Scanner;

public class P1294 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int i = 0; i < n; i++) {
			int m, a, b;
			m = sc.nextInt();
			a = sc.nextInt();
			b = sc.nextInt();
			int vec[] = new int[m + 1];
			int sum = 0;
			for (int j = 0; j < m; j++) {
				vec[j] = sc.nextInt();
			}
		
			for (int j = a; j <= b; j++) {
				sum = sum + vec[j];
			}
			
			System.out.println(sum);
		}
		

	}

}
