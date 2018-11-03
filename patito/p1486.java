package solutions.patito;

import java.util.Scanner;
/**
 * 
 * @author sam
 *
 */
public class p1486 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		//serie   1| 2| 1| 4| 2| 6| 3| 8| 5| 10| 8  | 12 | 
		//numeros 1| 2| 3| 4| 5| 6| 7| 8| 9| 10| 11 | 12 | 
		// mira los numeros pares y los impares
		int conta_fibo = 1;
		for (int i = 0; i < n; i++) {
			if((i + 1) % 2 == 0) {
				System.out.println(i+1);
			}else {
				System.out.println(fibo(conta_fibo));
				conta_fibo++;
			}
			
		}

	}

	private static int fibo(int i) {
		int a = 0;
		int b = 1;
		int f = 0;
		for (int j = 0; j < i; j++) {
			f = a + b;
			a = b;
			b = f;
		}
		return a;
	}

}
