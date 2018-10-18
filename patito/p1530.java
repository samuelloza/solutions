package solutions.patito;

import java.util.Scanner;

public class p1530 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext()) {
			int x1,y1,x2,y2,x3,y3;
			x1  = sc.nextInt();
			y1  = sc.nextInt();

			x2 = sc.nextInt();
			y2 = sc.nextInt();
			
			x3 = sc.nextInt();
			y3 = sc.nextInt();
			
	        double sol= (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
	        System.out.printf("%.1f", Math.abs(sol));
		}
	}

}
