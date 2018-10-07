

import java.util.Scanner;

public class p1675 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int casos = sc.nextInt();
		for (int i = 0; i < casos; i++) {
			long n = sc.nextLong();
			long k = sc.nextLong();
			System.out.println(k*((n*(n+1))/2));
		}
	
		
	}

}
