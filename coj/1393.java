import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		BigInteger ba = BigInteger.valueOf(a);
		String s = ba.pow(b).toString();
		while (s.length() > 70) {
			System.out.println(s.substring(0, 70));
			s = s.substring(70, s.length());
		}
		System.out.println(s);
	}
}