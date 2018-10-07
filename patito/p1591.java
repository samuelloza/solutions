import java.util.Scanner;

public class p1591 {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int casos = sc.nextInt();
		for (int i = 0; i < casos; i++) {
			int numero = sc.nextInt();
			//descomponemos 
			boolean primo    = false;
			int nuevo_numero = 0;
			int contador     = 0;
			while(numero > 0) {
				int digito = numero % 10;
				    numero = numero / 10 ;
				   if(es_primo(digito)) {
					   primo = true;
					   //Construimos el nuevo digito
					   nuevo_numero = nuevo_numero + ((int)Math.pow(10, contador)*digito);
					   contador++;
					   
				   }
			}
			
			if(primo == false) {
				System.out.println(-1);
			}else {
				System.out.println(nuevo_numero);
			}
		}
		
	}

	private static boolean es_primo(int digito) {
		int contador = 0;
		for (int i = 1; i <= digito; i++) {
				if(digito % i == 0) {
					contador++;
				}
		}
		if(contador == 2) {
			return true;
		}else {
			return false;
		}
	}
	

}
