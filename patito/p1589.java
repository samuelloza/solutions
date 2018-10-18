import java.util.Scanner;

public class p1589 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (sc.hasNext()) {
			String cade = sc.nextLine();
			int vec[] = new int[256];
			for (int i = 0; i < cade.length(); i++) {
				vec[cade.charAt(i)]++;
			}
			char i = 0;
			for (i = 'a'; i <= 'z'; i++) {
				if(vec[i] == 0) {
					System.out.println((char)i);
					break;
				}
			}
			if(i > 'z') {
				System.out.println(-1);
			}
			
		}
	}
}
