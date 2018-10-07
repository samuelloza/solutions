import java.util.Scanner;

public class p1590 {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int n,a,b;
		while(sc.hasNext()) {
		n = sc.nextInt();
		a = sc.nextInt();
		b = sc.nextInt();
		int solucion  = 0;
		for(int i = 1; i <= n; i++) {
			int resultado = suma_digitos(i);
			if(resultado >=a && resultado <=b) {
				solucion = solucion + i;
			}
		}
		System.out.println(solucion);
		}
		
	}
	/**
	 * 
	 * @param numero a descomponer
	 * @return la suma de los digitos de un numero
	 */
	public static int suma_digitos(int numero) {
		int suma = 0;
		while(numero > 0) {
			int digito = numero % 10;
			numero = numero / 10;
			suma = suma + digito;
		}
		return suma;
	}

}
