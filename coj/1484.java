import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int i;

		String x;

		Double v[] = new Double[n];
		for (i = 0; i < n; i++) {
			x = sc.next();
			v[i] = Double.parseDouble(x);
		}

		Double y = Collections.max(Arrays.asList(v));
		for (i = n - 1; i > -1; i--) {

			if (v[i].equals(y)) {
				System.out.println(i + 1);
				break;
			}

		}
	}
}