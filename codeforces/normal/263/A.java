import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

			Scanner sc=new Scanner(System.in);
			
			int ii = 0;
			int jj = 0;
			for (int i = 1; i <= 5; i++) {
				 int t = 0; 
				 for (int j = 1; j <= 5; j++) {
					t = sc.nextInt();
					 if(t == 1){
						 ii = i;
						 jj = j;
					}
				}
			}
			
			 
			int ans = 0 ;
			
			if(jj > 3){
				ans = jj - 3;
			}else if(jj < 3){
				ans = 3 - jj;
			}
			
			if(ii > 3){
				ans += ii -3;
			}else if(ii < 3){
				ans += 3 - ii;
			}
			System.out.println(ans);
			
	}

}