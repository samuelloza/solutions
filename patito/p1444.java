import java.util.Scanner;

public class p1444 {

	public static void main(String[] args) {
		Scanner sc =new Scanner(System.in); 
		int n = sc.nextInt();
		for (int i = 0;i < n ;i++ ) {
			int dato = sc.nextInt();
			String cadena = Integer.toBinaryString(dato);
			int contador = 0;
			for(int j = 0; j < cadena.length() - 1; j++) {
				if(cadena.charAt(j) == '1' && cadena.charAt(j + 1) == '1') {
					contador ++;
					j++;
				}
			}
			System.out.println(contador);
		}
	}

}
