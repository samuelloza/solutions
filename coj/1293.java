import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x;
		x = sc.nextInt();
		BigInteger to=BigInteger.ONE;
		BigInteger dos=BigInteger.valueOf(2);
		for (int i = 0; i < x; i++) {
			to=to.multiply(dos);
		}
		System.out.println(to);
	}

}
