import java.util.Scanner;

public class p1056 {

	public static void main(String[] args) {
		Scanner sc =new Scanner(System.in); 
		int n = sc.nextInt();
		for (int i = 0;i < n ;i++ ) {
			int m = sc.nextInt();
			String sol = "";
			for (int j = 0; j < m; j++) {
				int d = sc.nextInt();
				sol = (d+"")+" "+sol;	
			}
			System.out.println(sol);
		}
	}

}
