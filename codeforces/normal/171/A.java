import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String a, b;
		a = sc.next();
		b = sc.next();
		StringBuilder bb=new StringBuilder(b);
		bb.reverse();
		BigInteger a1=new BigInteger(new String(bb));
		BigInteger a2=new BigInteger(a);
		System.out.println(a1.add(a2));
	}

}