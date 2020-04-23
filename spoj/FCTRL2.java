import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main(String agrs[]) {
		BigInteger a[] = new BigInteger[100 + 1];
		BigInteger s=new BigInteger("2");
		BigInteger one=BigInteger.ONE;
		a[0] = a[0].ONE;
		a[1] = a[1].ONE;
		for (int i = 2; i < 100+1; i++) {
			a[i] = a[i - 1].multiply(s);
		        s=s.add(one);
		}
		Scanner sc = new Scanner(System.in);
		int g=sc.nextInt();
		while (g-->0) {
			System.out.println(a[sc.nextInt()]);
		}

	}
}
