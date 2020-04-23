import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String x = sc.next();
		double pi = 3.14;
		double t = 0.5;
		if (x.equals("rhombus")) {
			String c = sc.next();
			String k = sc.next();
			System.out.printf("%.2f", Double.parseDouble(c)
					* Double.parseDouble(k) * t);
		}
		if (x.equals("circle")) {
			String c1 = sc.next();
			System.out.printf("%.2f", (Double.parseDouble(c1)
					* Double.parseDouble(c1) * pi));
		}
		if (x.equals("triangle")) {
			String h = sc.next();
			String i = sc.next();
			System.out.printf("%.2f", Double.parseDouble(h)
					* Double.parseDouble(i) * t);
		}
	}
}