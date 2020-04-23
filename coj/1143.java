import java.util.Scanner;

public class Main {
	static String[][] mat = new String[201][201];
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int lim = sc.nextInt();
		while (lim != 0) {
			String cad = sc.next();
			asiado(cad, lim);
			mostrar(lim,cad);
			lim = sc.nextInt();
		}
	}

	public static void asiado(String cad, int lim) {
		boolean sw = true;
		int k = 0, ii = 0,kk=0;
		for (int i = 0; i < cad.length() / lim; i++) {
			while (kk < lim) {
				kk++;
				mat[i][k] = cad.substring(ii, ii + 1);
				ii++;
				if (sw) {
					k++;
				} else {
					k--;
				}
					
			}
			kk=0;
			if (sw) {
				sw = false;
				k--;
			} else {
				sw = true;
				k++;
			}
		}
		
	}
	public static void mostrar(int lim,String cad)
	{
		String cad2="";
		for (int i = 0; i < lim; i++) {
			for (int j = 0; j < cad.length()/lim; j++) {
				cad2=cad2+mat[j][i];
			}
		}
		System.out.println(cad2);
		
	}

}
