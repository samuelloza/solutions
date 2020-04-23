import java.util.Scanner;
public class Main{
	public static void main(String[] args) {
		Scanner sc2 = new Scanner(System.in);
		int num = sc2.nextInt();
		double h, d,sum1=0;
		for (int j = 0; j < num; j++) {
			h =new Double(sc2.next());
			d = new Double(sc2.next());
			double x = (Math.pow(h, 2) - Math.pow(d, 2)) / (2 * h);
			sum1=sum1+x;
			System.out.printf("%.1f", x);
			System.out.println();
		}
		System.out.printf("%.1f", sum1/num);
		System.out.println();

		
	}
}