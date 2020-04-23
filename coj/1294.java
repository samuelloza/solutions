import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int lim;
		while (sc.hasNext()) {
			lim = sc.nextInt();

			int vec[] = new int[3009];
			for (int ii = 0; ii < lim; ii++) {
				vec[ii] = sc.nextInt();
			}
			int vec2[] = new int[3009];
			for (int i = 0; i < lim - 1; i++) {
				vec2[i] = Math.abs(vec[i]) - Math.abs(vec[i + 1]);
				vec2[i] = Math.abs(vec2[i]);
			}

			boolean sw = true;
			for (int i = 0; i < lim; i++) {
				for (int j = i + 1; j < lim; j++) {
					if (vec2[i] > vec2[j]) {
						int aux = vec2[i];
						vec2[i] = vec2[j];
						vec2[j] = aux;

					}

				}
			}

			for (int i = 1; i < lim; i++) {
				if (vec2[i]!=i) {
				sw=false;	
				}
			}
			if (sw) {
				System.out.println("Jolly");
			}
			else {
				System.out.println("Not jolly");
			}
			

		}

	}
}
