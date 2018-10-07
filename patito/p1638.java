import java.util.Scanner;

public class p1638 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int ngradas = 0;
		int anterior = 0;
		String sol = "";
		for (int i = 0; i < n; i++) {
			int d = sc.nextInt();
		    if(anterior >= d ) {
		    	ngradas++;
		       if(sol.length() == 0) {
		    	   sol = anterior+"";
		       }else {
		    	   sol = sol+" "+anterior;
		       }
		    }
			
		    if(i + 1 == n) {
		    	ngradas++;
		    	if(sol.length() == 0) {
		    		sol = d+"";
		    	}else {
			    	sol = sol+" "+d;	
		    	}
		    }
		    anterior = d;
		}
   	    System.out.println(ngradas);
   	    System.out.print(sol);
	}

}
