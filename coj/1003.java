import java.util.Scanner;

//1003
public class Main{

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int lim = sc.nextInt();
		int mat[][] = new int[6][101];

		for (int i = 0; i < lim; i++) {
			int pos = 0;
			int x, y;
			x = sc.nextInt();
			y = sc.nextInt();
			int j2=0;
			int sum = 0, sum2 = 0;
			for (int j = 0; j < y; j++) {
				for (j2 = 0; j2 < x; j2++) {
					mat[j2][j] = sc.nextInt();

				}
			}
			for (int j = 0; j < x; j++) {
				sum = 0;
				for (j2 = 0; j2 < y; j2++) {
					sum = mat[j][j2] + sum;
				}
				if (sum > sum2) {
					sum2 = sum;
					pos=j+1;
				}
			}
			System.out.println(pos);
		}
	}
}