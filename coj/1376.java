import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		char v[] = Integer.toString(x).toCharArray();
		Arrays.sort(v);
		String aux = String.valueOf(v);
		String y;

		while (true) {
			x = x + 1;
			y = Integer.toString(x);
			char c[] = y.toCharArray();
			Arrays.sort(c);
			if (aux.equals(String.valueOf(c))) {
				System.out.println(y);
				break;
			}
			if (y.length() > aux.length()) {
				System.out.println("0");
				break;
			}
		}
	}

}