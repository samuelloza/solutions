import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int c;
		c = sc.nextInt();
		BigInteger x = new BigInteger("4");
		BigInteger x0 = BigInteger.ZERO;
		for (int i = 0; i < c; i++) {
			String le;
			le = sc.next();
			BigInteger x2 = new BigInteger(le);
			if (x2.mod(x).equals(x0)) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}

		}
	}

}
