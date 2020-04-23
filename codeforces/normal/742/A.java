import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		while(sc.hasNext()){
			
		
		int n = sc.nextInt();
		if(n == 0){
			System.out.println(1);
			return;
		}
		int ans = (n % 4) - 1 ; 
		if(ans == 0){
			System.out.println(8);
		}else if(ans == 1){
			System.out.println(4);
		}else if(ans == 2){
			System.out.println(2);
		}else if(ans == -1){
			System.out.println(6);
		}
		}
	}

}