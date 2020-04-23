import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String l = sc.next();
		BigInteger vec[] = new BigInteger[100000];
		while (Integer.parseInt(l) > 0) {
			BigInteger tres = new BigInteger("3");
			BigInteger num = new BigInteger(l);
			BigInteger ce = BigInteger.ZERO;
			int ii = 0;
			for (int i = 0; i < 100000; i++) {

				vec[i] = num.mod(tres);
				num = num.divide(tres);
				ii++;
				if (num.equals(ce)) {
					break;
				}
			}
			for (int i = ii - 1; i >= 0; i--) {
				System.out.print(vec[i]);
			}
			System.out.println();
			l = sc.next();

		}
	}

}
