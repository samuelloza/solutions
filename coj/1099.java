import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int v[] = new int[4];
		int aux;
		boolean x = true;
		while (x) {
			v[0] = sc.nextInt();
			if (v[0] != 0) {
				v[1] = sc.nextInt();
				v[2] = sc.nextInt();
				if (v[0] < v[1]) {
					aux = v[0];
					v[0] = v[1];
					v[1] = aux;
				}
				if (v[0] < v[2]) {
					aux = v[0];
					v[0] = v[2];
					v[2] = aux;
				}
				if (v[1] < v[2]) {
					aux = v[1];
					v[1] = v[2];
					v[2] = aux;
				}

				if (v[0] == (Math.sqrt((Math.pow(v[1], 2)) + Math.pow(v[2], 2)))) {
					System.out.println("right");
				} else {
					System.out.println("wrong");
				}
			} else {
				break;
			}
		}
	}
}
