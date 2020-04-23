import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int vec[] = new int[4];
		for (int i = 0; i < 3; i++) {
			vec[i] = sc.nextInt();
		}
		String aa = sc.next();
		for (int i = 0; i < 3; i++) {
			for (int j = i + 1; j < 3; j++) {
				if (vec[i] > vec[j]) {

					int yy = vec[i];
					vec[i] = vec[j];
					vec[j] = yy;
				}

			}
		}
		String vec3[] = new String[4];

		vec3[0] = "A";
		vec3[1] = "B";
		vec3[2] = "C";

		String vec2[] = new String[4];
		vec2[0] = aa.substring(0, 1);
		vec2[1] = aa.substring(1, 2);
		vec2[2] = aa.substring(2, 3);

		for (int i = 0; i < 3; i++) {
			if (vec2[0].equals(vec3[i])) {
				System.out.print(vec[i]);
			}
		}
		for (int i = 0; i < 3; i++) {
			if (vec2[1].equals(vec3[i])) {
				System.out.print(" " + vec[i]);
			}
		}
		for (int i = 0; i < 3; i++) {
			if (vec2[2].equals(vec3[i])) {
				System.out.print(" " + vec[i]);
			}
		}
	}
}