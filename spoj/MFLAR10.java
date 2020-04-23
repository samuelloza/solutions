import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String cad = sc.nextLine();

		while (!cad.equals("*")) {
			String vec[] = new String[10000];
			boolean sw = false;
			StringTokenizer tokens = new StringTokenizer(cad, " ");
			int j = 0;
			while (tokens.hasMoreTokens()) {
				vec[j] = (tokens.nextToken());
				j++;
			}
			for (int i = 0; i < j; i++) {
				if (vec[0].substring(0, 1).equalsIgnoreCase(
						vec[i].substring(0, 1))
						|| (vec[i].charAt(0) <= 48 && vec[i].charAt(0) >= 57)) {
					sw = true;
				} else {
					sw = false;
					break;
				}
			}
			if (sw) {
				System.out.println("Y");
			} else {
				System.out.println("N");
			}
			cad = sc.nextLine();
		}

	}

