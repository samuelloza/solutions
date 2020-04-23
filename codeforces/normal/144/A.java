import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int ma = -1;
		int mi = 99999;
		int posa = 0;
		int posb = 0;
		for (int i = 0; i < n; i++) {
			int t = sc.nextInt();
			if (t > ma) {
				posa = i + 1;
				ma = t;
			}
			if (t <= mi) {
				posb = i + 1;
				mi = t;
			}
		}

		if (posa == posb) {
			System.out.println(0);
		} else {

			int ans = ((posa) + (n - posb));
			if(posb < posa){
				ans--;
			}
			
			System.out.println(ans-1);	
		}

	}

}