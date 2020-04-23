import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
				
		int n = sc.nextInt();
		int m = sc.nextInt();
		int j = 1;
		while(n > 0 && m > 0 ){
			n--;
			m--;
			j++;
		}
		
		if(j%2 != 0){
			System.out.println("Malvika");	
		}else{
			System.out.println("Akshat");
		}
		

}

}