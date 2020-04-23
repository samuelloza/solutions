import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int lim = sc.nextInt();
		int i = 0;
		int max1, max2;
		while (i < lim) {
			int uno = sc.nextInt();
			int dos = sc.nextInt();
			int yyy, zzz;
			max1 = 0;max2 = 0;
			for (int j = 1; j <= uno; j++) {
				yyy = sc.nextInt();
				if (yyy > max1) {
					max1 = yyy;
				}
			}
			for (int jj = 1; jj <= dos; jj++) {
				zzz = sc.nextInt();
				if (zzz > max2) {
					max2 = zzz;
				}
			}
			if (max1 >= max2) {
				System.out.println("Godzilla");
			} else {
				System.out.println("MechaGodzilla");
			}
			i++;
		}
	}
}