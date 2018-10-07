import java.util.Scanner;

public class p1622 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for (int i = 0; i < t; i++) {
		  int n,f1,f2;
		  n  = sc.nextInt();
		  f1 = sc.nextInt();
		  f2 = sc.nextInt();
		  if(n == 1) {
			  System.out.print(f1);
		  }
		  if(n >= 2) {
			  System.out.print(f1+"+"+f2);
		  }
		  for (int j = 0; j < n - 2; j++) {
			  int f = f1 + f2;
              f1 = f2;
			  f2 = f;
			  if(j == n - 2 ) {
				  System.out.print(f);
			  }else {
				  System.out.print("+"+f);  
			  }
		  }
		  System.out.println();
		}
	}
}
