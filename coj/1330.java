import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		String vec[] = new String[100];
		vec[0] = "ABSINTH";
		vec[1] = "BEER";
		vec[2] = "BRANDY";
		vec[3] = "CHAMPAGNE";
		vec[4] = "GIN";
		vec[5] = "RUM";
		vec[6] = "SAKE";
		vec[7] = "TEQUILA";
		vec[8] = "VODKA";
		vec[9] = "WHISKEY";
		vec[10] = "WINE";

		vec[11] = "0";
		vec[12] = "1";
		vec[13] = "2";
		vec[14] = "3";
		vec[15] = "4";
		vec[16] = "5";
		vec[17] = "6";
		vec[18] = "7";
		vec[19] = "8";
		vec[20] = "9";
		vec[21] = "10";
		vec[22] = "11";
		vec[23] = "12";
		vec[24] = "13";
		vec[25] = "14";
		vec[26] = "15";
		vec[27] = "16";
		vec[28] = "17";
		int lim = sc.nextInt();
		for (int j2 = 0; j2 < lim; j2++) {
			int i = sc.nextInt();
			int cont = 0;
			for (int j = 0; j < i; j++) {
				String aux = sc.next();
				for (int k = 0; k <= 28; k++) {
					if (vec[k].equals(aux)) {
						cont++;
					}
				}
			}
			System.out.println(cont);
		}

	}
}
