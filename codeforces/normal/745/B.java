import java.util.Scanner;

public class B {

	public static void main(String[] args) {
		int a,b;
		Scanner sc=new Scanner(System.in);
		a=sc.nextInt();
		b=sc.nextInt();
		String vec[] = new String[1000];
		
		for (int i = 0; i < a; i++) {
			String tmp =sc.next();
			vec[i] = "";
			for (int j = 0; j < tmp.length(); j++) {
				if(tmp.charAt(j)=='X'){
					vec[i]+="X";
				}
				
			}
		}
		
		int mat[][] = new int[a+1][b+1];
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < vec[i].length(); j++) {
				if(vec[i].charAt(j) == 'X'){
					mat[i][j]=1;
				}
			}
		}
		
		int ans1 = 0;
		int ans2 = 0;
		int re = 0;
		boolean sw = true;
		boolean end = false;
		int ii = 0,jj=0;
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				if(mat[i][j] == 1){
					ans1++;
					ii++;
				}	
			}
			if(sw && ans1 > 0){
				
				re = ans1;
				ans1=0;
				sw= false;
			}else{
				
				if(re!=ans1 && ans1 > 0){
					System.out.println("NO");
					end = true;
					break;
				}
			}
		}
		
		boolean sw2=true;
		int re2=0;
		for (int i = 0; i < a && !end; i++) {
			for (int j = 0; j < b; j++) {
				if(mat[j][i] == 1){
					ans2++;
					jj++;
				}	
			}
			if(sw2 && ans2 > 0){
				re2 = ans2;
				ans2=0;
				sw2= false;
			}else{
				if(re2!=ans2 && ans2 > 0){
					System.out.println("NO");
					end=true;
				}
			}
		}
		
		if(!end){
			if( re == re2 && re!=1 && re2!=1){
				System.out.println("NO");
			}else{
				System.out.println("YES");
			}
		}
		

	}

}