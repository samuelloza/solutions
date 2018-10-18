import java.util.Scanner;

public class p1540 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		sc.nextLine();
		for (int i = 0; i < n; i++) {
			String dato         = sc.nextLine();
			String nuevo_numero = "";
			for (int j = 0; j < dato.length(); j++) {
				char num = dato.charAt(j);
				if(num == '2' || num == '3' || num == '5' || num =='7') {
					nuevo_numero +=(num+""); 
				}
			}
			if(nuevo_numero.length() == 0) {
				System.out.println(0);
			}else {
				System.out.println(nuevo_numero);
			}
			
		}
	}

}
