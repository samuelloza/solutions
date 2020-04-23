import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int con = 0;
		String ev = "";
		while (true) {
			String aux = sc.nextLine();
			if (aux.charAt(0) != 48) {
				con=0;
				ev = Integer.toBinaryString(Integer.parseInt(aux));
				for (int i = 0; i < ev.length(); i++) {
					if (ev.charAt(i) == 49) {
						con++;
					}
				}
				System.out.println("The parity of " + ev + " is " + con
						+ " (mod 2).");
			} else {
				break;
			}
		}
	}
}
