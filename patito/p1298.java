import java.util.Scanner;

public class p1298 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (sc.hasNext()) {
			int n = sc.nextInt();
			int vec[] = new int[n];
			for (int i = 0; i < n; i++) {
				vec[i] = sc.nextInt();
			}
			int sol = 0;
			for (int i = 0; i < n; i++) {
				if(vec[n - 1 ] == vec[i]) {
					sol ++;
				}
			}
			System.out.println(sol);
			
		}
	}
}
