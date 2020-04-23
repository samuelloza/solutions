import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String cad = sc.nextLine();
		while (!cad.equals("#")) {

			String vec[] = new String[8];
			String vec2[] = new String[8];
			String vecad[] = new String[cad.length() + 2];

			vec[0] = " ";
			vec[1] = "!";
			vec[2] = "$";
			vec[3] = "%";
			vec[4] = "(";
			vec[5] = ")";
			vec[6] = "*";

			vec2[0] = "%20";
			vec2[1] = "%21";
			vec2[2] = "%24";
			vec2[3] = "%25";
			vec2[4] = "%28";
			vec2[5] = "%29";
			vec2[6] = "%2a";
			// vaciado
			for (int i = 0; i < cad.length(); i++) {
				vecad[i] = cad.substring(i, i + 1);
			}
			for (int i = 0; i < cad.length(); i++) {
				for (int j = 0; j < 7; j++) {
					if (vecad[i].equals(vec[j])) {
						vecad[i] = vec2[j];
					}
				}
			}
			for (int i = 0; i < cad.length(); i++) {
				System.out.print(vecad[i]);
			}
			
			System.out.println();
			cad = sc.nextLine();
		}
	}
}