package solutions.patito;

import java.util.Scanner;

public class p1474 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] vec_a = new int[n];
		int[] vec_b = new int[n];
		
		for(int i = 0; i < n; i++) {
			vec_a[i]= sc.nextInt();
		}
		
		for(int i = 0; i < n; i++) {
			vec_b[i]= sc.nextInt();
		}
		sc.nextLine();
		for (int i = 0; i < n; i++) {
			String operador = sc.nextLine();
			if(operador.equals("+")) {
				System.out.println(vec_a[i]+vec_b[i]);
			}else if(operador.equals("-")){
				System.out.println(vec_a[i]-vec_b[i]);
			}if(operador.equals("*")) {
				System.out.println(vec_a[i]*vec_b[i]);
			}else if(operador.equals(">")) {
				System.out.println(Math.max(vec_a[i], vec_b[i]));
			}else if(operador.equals("<")) {
				System.out.println(Math.min(vec_a[i], vec_b[i]));
			}
			
		}
	}

}
