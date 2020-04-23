import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc=new Scanner(System.in);
		String cade = sc.next();
		String tmp="";
		String ans = "";
		int con = 0;
		for (int i = 0; i < cade.length() - 2 ; i++) {
			if(cade.charAt(i) == 'W' && cade.charAt(i+1) == 'U' && cade.charAt(i+2) == 'B'){
				i+=2;
				if(ans.length() > 0 && ans.charAt(ans.length()-1)!=' '){
					ans+=" ";					
				}

			}else{
				ans+=cade.charAt(i);
			}
			
		}
		

		System.out.println(ans.trim());
		

		
		
	}

}